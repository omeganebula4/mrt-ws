from arm_pos_control.min_jerk import min_jerk
import numpy as np
import ast
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
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
    
    
    

