import rclpy
from rclpy.node import Node
from msg_interfaces.msg import ArmEndMotion, EncoderArm
from geometry_msgs.msg import Point

import math


class BigBoi:
    l_s = 0.2
    l_e = 0.2

    Kp = 98767876

    MAX_OUTPUT = 5

    def __init__(self):
        self.encoder_history = []

    def IK(self, px, py):
        r = (px **2 + py ** 2) ** 0.5
        theta = math.atan2(py, px)

        # angle btw origin-end and origin-joint
        phi = math.acos((self.l_s ** 2 + r ** 2 - self.l_e ** 2) / (2 * self.l_s * r))
        # always +ve

        q_s = theta + phi
        q_e = math.acos((self.l_s ** 2 + self.l_e ** 2 - r ** 2) / (2 * self.l_s * self.l_e))

        return q_s, q_e

    def K(self, q_s, q_e):
        px = self.l_s * math.cos(q_s) + self.l_e * math.cos(q_e)
        py = self.l_s * math.sin(q_s) + self.l_e * math.sin(q_e)

        return px, py

    def PIDs(self, q_s, q_e, a_s, a_e):
        """
        :param q_s: ideal shoulder angle
        :param q_e: ideal elbow angle
        :param a_s: real shoulder angle
        :param a_e: real elbow angle
        :return: ((PWM_s, dir_s), (PWM_e, dir_e))
        """

        Q = [q_s, q_e]
        A = [a_s, a_e]

        to_return = []

        for q, a  in zip(Q, A):
            e = q - a

            output = e * self.Kp

            rev = output < 0

            output = abs(output)

            if output > self.MAX_OUTPUT:
                output = self.MAX_OUTPUT

            to_return.append((output, rev))

        return tuple(to_return)

queue_size = 10

class ControllerNode(Node):
    def __init__(self):
        super().__init__('PID_Controller')
        self.arm_publisher = self.create_publisher(ArmEndMotion, 'arm_commands', queue_size)
        self.receive_encoder = self.create_subscription(EncoderArm, '/encoder_arm', self.encoder_callback, queue_size)
        self.receive_command = self.create_subscription(Point, 'user_commands', self.send_command, queue_size)
        self.ik_handler = BigBoi()

        self.q = [0, -0.57, -0.12] # current base, shoulder, elbow "angles"
        self.desired_pos = [0, 0]

    def encoder_callback(self, msg):
        current_base_pos = msg.arm_node2[0] # min - 10698, home - 65536, max - 117678
        current_shoulder_pos = msg.arm_node0[0] # min - -8650, home - 0, max - 8680
        current_elbow_pos = msg.arm_node1[0] # min - -9361, home - 0, max - 4680 

        # Convert from continuous joint angles to desired encoder positions
        self.q[0] = -0.21 + ((0.45 * (current_base_pos)) / 117678) # motor_side - 0.24, home (middle) - 0.0, other_side - -0.21
        self.q[1] = -2.13 + ((3.13 * (current_shoulder_pos + 8650)) / 17330) # home (90 deg) - -0.57, min (0 deg) - -2.13, max (180 deg) - 1.0 
        self.q[2] = -3.27 + ((4.71 * (current_elbow_pos + 9361)) / 14041) # home (90 deg) -0.12, min (0 deg) - -3.27, max (180 deg) - 1.44
    
    def update_desired_pos(self, msg):
        self.desired_pos[0] = msg.x
        self.desired_pos[1] = msg.y

        desired_angles = self.ik_handler.IK(*self.desired_pos)
        arm_command = ArmEndMotion()
        pwm_s, dir_s, pwm_e, dir_e = self.ik_handler.PIDs(*desired_angles, self.q[1], self.q[2])

        arm_command.direction = [dir_s, dir_e, 0, 0, 0]
        arm_command.speed = [pwm_s, pwm_e, 0, 0, 0]
        arm_command.sys_check = 0
        arm_command.reset = 0

        self.arm_publisher.publish(arm_command)
