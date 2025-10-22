from min_jerk import min_jerk
import numpy as np
import math
import time
import threading
import ast
import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from msg_interfaces.msg import EncoderArm

class EncoderSubscriber(Node):
    def __init__(self):
        super().__init__('encoder_subscriber')
        self.latest_encoder_data = None
        self.data_lock = threading.Lock()
        
        # Subscribe to your encoder topic
        self.encoder_sub = self.create_subscription(
            EncoderArm,
            'encoder_arm',
            self.encoder_callback,
            10
        )
    
    def encoder_callback(self, msg):
        with self.data_lock:
            self.latest_encoder_data = msg.data  # Adjust based on your message structure
    
    def get_latest_data(self):
        with self.data_lock:
            return self.latest_encoder_data

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
    
    def updateState(self, s):
        self.idle = s

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

def sendCommand(desired_pos, t, encoder_node):
    global queue
    print("Reaching ", desired_pos)
    
    # Read encoder data here
    encoder_data = encoder_node.get_latest_data()
    if encoder_data is not None:
        print(f"Current encoder reading: {encoder_data}")
    
    time.sleep(t)
    queue.current_pos = desired_pos
    print("Reached ", desired_pos)

def execCommand(traj, t, encoder_node):
    print("Starting Position: ", traj[0])
    for idx in range(len(t)-1):
        sendCommand(traj[idx+1], t[idx+1] - t[idx], encoder_node)

def getInput(lock):
    global queue
    while True:
        inp = input()
        coords, times = ast.literal_eval(f"({inp})")
        coords = [[coords[i], coords[i+1]] for i in range(0, len(coords), 2)]
        with lock:
            queue.add((coords, times))

def processCommands(lock, encoder_node):
    global queue
    while True:
        with lock:
            if len(queue.queue) == 0:
                continue
            
            queue.idle = False
            wp, tp = queue.dequeue()
            execCommand(*getCommandList(queue.current_pos, wp, tp, queue.sample_freq), encoder_node)
            queue.idle = True

def spin_ros(encoder_node):
    """Separate thread to spin ROS2 executor"""
    executor = MultiThreadedExecutor()
    executor.add_node(encoder_node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass

def main():
    global queue
    
    # Initialize ROS2
    rclpy.init()
    encoder_node = EncoderSubscriber()
    
    queue = QueueCommand(10)
    lock = threading.Lock()

    # Create threads
    t1 = threading.Thread(target=processCommands, args=(lock, encoder_node))
    t2 = threading.Thread(target=getInput, args=(lock,))
    t3 = threading.Thread(target=spin_ros, args=(encoder_node,), daemon=True)
    
    t3.start()  # Start ROS2 spinning first
    t1.start()
    t2.start()

    try:
        t1.join()
        t2.join()
    except KeyboardInterrupt:
        print("Shutting down...")
    finally:
        encoder_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
