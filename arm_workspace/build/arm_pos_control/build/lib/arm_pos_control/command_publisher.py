from arm_pos_control.min_jerk import min_jerk
import numpy as np
import math
import time
import threading
import ast
import rclpy
from rclpy.node import Node
from msg_interfaces.msg import UserCommand

queue_size = 10

class CommandPublisher(Node):
    def __init__(self):
        super().__init__('command_publisher')
        self.publisher_ = self.create_publisher(UserCommand, 'user_commands', queue_size)
    
    def publish_pos_command(self, desired_pos):
        msg = UserCommand()
        msg.x = float(desired_pos[0])
        msg.y = float(desired_pos[1])
        msg.z = 0.0
        msg.sys_check = False
        msg.reset = False
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing: x={msg.x}, y={msg.y}')
    
    def publish_reset_command(self):
        msg = UserCommand()
        msg.x = 0.0
        msg.y = 0.0
        msg.z = 0.0
        msg.sys_check = False
        msg.reset = True
        self.publisher_.publish(msg)
        self.get_logger().info('Reset')
    
    def publish_check_command(self):
        msg = UserCommand()
        msg.x = 0.0
        msg.y = 0.0
        msg.z = 0.0
        msg.sys_check = True
        msg.reset = False
        self.publisher_.publish(msg)
        self.get_logger().info('System Check')

class QueueCommand:
    def __init__(self, freq):
        self.queue = []
        self.idle = True
        self.current_pos = [0, 0]
        self.sample_freq = freq
    
    def peek(self):
        if len(self.queue) == 0:
            return None
        return self.queue[0]

    def dequeue(self):
        if len(self.queue) == 0:
            return None
        return self.queue.pop(0)
    
    def add(self, elem):
        self.queue.append(elem)


def getCommandList(current_pos, waypoints, timepoints, sample_freq):
    pos = waypoints
    pos.insert(0, current_pos)
    pos = np.array(pos)

    total_time = timepoints[-1]
    tp = timepoints
    tp.pop()
    tp = np.array(tp) * sample_freq

    dur = math.ceil(total_time * sample_freq) + 1
    traj, psg = min_jerk(pos, dur, None, None, tp)

    t = np.linspace(0, total_time, dur)
    return traj, t


def sendCommand(desired_pos, t, publisher_node):
    global queue
    
    publisher_node.publish_pos_command(desired_pos)
    
    time.sleep(t)
    queue.current_pos = desired_pos


def execCommand(traj, t, publisher_node):
    print("Starting Position: ", traj[0])
    for idx in range(len(t)-1):
        sendCommand(traj[idx+1], t[idx+1] - t[idx], publisher_node)


def getInput(lock, publisher_node):
    global queue
    while True:
        inp = input()

        if inp == "reset":
            cnt = 0
            while cnt < 20:
                publisher_node.publish_reset_command()
                time.sleep(0.5)
                cnt += 1
        
        elif inp == "check":
            cnt = 0
            while cnt < 20:
                publisher_node.publish_check_command()
                time.sleep(0.5)
                cnt += 1

        else:
            coords, times = ast.literal_eval(f"({inp})")
            coords = [[coords[i], coords[i+1]] for i in range(0, len(coords), 2)]
            with lock:
                queue.add((coords, times))


def processCommands(lock, publisher_node):
    global queue
    while True:
        with lock:
            if len(queue.queue) == 0:
                time.sleep(0.001)  # Small sleep to prevent busy waiting
                continue
            
            queue.idle = False
            wp, tp = queue.dequeue()
            execCommand(*getCommandList(queue.current_pos, wp, tp, queue.sample_freq), publisher_node)
            queue.idle = True


def main(args=None):
    global queue
    
    # Initialize ROS2
    rclpy.init(args=args)
    
    # Create the publisher node
    publisher_node = CommandPublisher()
    
    queue = QueueCommand(10)
    lock = threading.Lock()

    # Create threads
    t1 = threading.Thread(target=processCommands, args=(lock, publisher_node,), daemon=True)
    t2 = threading.Thread(target=getInput, args=(lock, publisher_node,), daemon=True)
    
    t1.start()
    t2.start()

    try:
        # Keep the ROS2 node spinning
        rclpy.spin(publisher_node)
    except KeyboardInterrupt:
        print("Shutting down...")
    finally:
        publisher_node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
