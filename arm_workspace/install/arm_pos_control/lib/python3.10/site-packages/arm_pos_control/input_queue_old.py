from arm_pos_control.min_jerk import min_jerk
import numpy as np
import ast
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from rclpy.task import Future

from std_msgs.msg import String
from pos_control_interfaces.action import Trajectory

MAX_QUEUE_SIZE = 10

"""
TODO:
check if goal accepted, move on to next goal if not accepted
if goal is aborted mid-way, clear the queue
wait for 2 seconds before popping the queue(?)
"""

class CommandPublisher(Node):
    def __init__(self):
        super().__init__('command_publisher')
        self.command_queue = []
        self.input_sub = self.create_subscription(String, 'user_input', self.inputCallback, MAX_QUEUE_SIZE)
        self.pid_action_client = ActionClient(self, Trajectory, 'pid_controller_actions')

    def inputCallback(self, msg):
        self.command_queue.append(msg.data)

    def send_goal(self, msg):
        self.pid_action_client.wait_for_server()

        goal_msg = Trajectory.Goal()
        goal_msg.command = msg
        self._send_goal_future = self.pid_action_client.send_goal_async(goal_msg)
        self._send_goal_future.add_done_callback(self.goal_response_callback)
    
    def goal_response_callback(self, future: Future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().warn('Invalid input given. Moving to next command in queue...')

    
    
    

