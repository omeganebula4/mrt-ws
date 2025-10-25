import rclpy
from rclpy.node import Node
from msg_interfaces.msg import ArmEndMotion, EncoderArm, UserCommand

import math


'''
TODO:
manage packages properly and handle all dependencies
check calculation of encoder values
add armcan.py
'''

class BigBoi:
    meow_s = 0.49
    meow_e = 0.515
    meow_nigga = 0.1

    l_s = math.sqrt(meow_s**2 + meow_nigga**2)
    l_e = meow_e
    alpha = math.atan(meow_nigga / meow_s)

    Kp = 98767876

    MAX_OUTPUT = 5

    def __init__(self):
        self.encoder_history = []

    def IK(self, px, py):
        r = (px **2 + py ** 2) ** 0.5
        theta = math.atan2(py, px)

        # angle from origin-end to origin-joint
        phi = math.acos((self.l_s ** 2 + r ** 2 - self.l_e ** 2) / (2 * self.l_s * r))
        # always +ve (coz we always want the joint above the origin-end line)

        q_s = theta + phi + self.alpha

        # angle from joint-end to origin-joint
        q_e = math.pi - math.acos((self.l_s ** 2 + self.l_e ** 2 - r ** 2) / (2 * self.l_s * self.l_e)) + self.alpha

        return q_s, q_e

    def K(self, q_s, q_e):
        px = self.l_s * math.cos(q_s - self.alpha) + self.l_e * math.cos(q_s - q_e)
        py = self.l_s * math.sin(q_s - self.alpha) + self.l_e * math.sin(q_s - q_e)

        return px, py

    def PIDs(self, q_s, q_e, a_s, a_e):
        """
        :param q_s: ideal shoulder angle
        :param q_e: ideal elbow angle
        :param a_s: real shoulder angle
        :param a_e: real elbow angle
        :return:
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
        self.receive_command = self.create_subscription(UserCommand, 'user_commands', self.update_desired_pos, queue_size)
        self.ik_handler = BigBoi()

        self.q = [0, 1.57, 1.57] # current base, shoulder, elbow "angles"
        self.desired_pos = [0, 0]

    def encoder_callback(self, msg):
        current_base_pos = msg.arm_node2[0] # min - 10698, home - 65536, max - 117678
        current_shoulder_pos = msg.arm_node0[0] # min - -8650, home - 0, max - 8680
        current_elbow_pos = msg.arm_node1[0] # min - -9361, home - 0, max - 4680 

        # Convert from continuous joint angles to desired encoder positions
        self.q[0] = -0.21 + ((0.45 * (current_base_pos)) / 117678) # motor_side - 0.24, home (middle) - 0.0, other_side - -0.21
        self.q[1] = math.pi / 2 + current_shoulder_pos / 5263
        self.q[2] = math.pi / 2 - current_elbow_pos / 5714 # home (90 deg) -0.12, min (0 deg) - -3.27, max (180 deg) - 1.44
    
    def update_desired_pos(self, msg):
        arm_command = ArmEndMotion()

        if msg.reset:
            arm_command.direction = [0, 0, 0, 0, 0]
            arm_command.speed = [0, 0, 0, 0, 0]
            arm_command.sys_check = False
            arm_command.reset = True
            self.arm_publisher.publish(arm_command)
            return

        if msg.sys_check:
            arm_command.direction = [0, 0, 0, 0, 0]
            arm_command.speed = [0, 0, 0, 0, 0]
            arm_command.sys_check = True
            arm_command.reset = False
            self.arm_publisher.publish(arm_command)
            return

        self.desired_pos[0] = msg.x
        self.desired_pos[1] = msg.y

        desired_angles = self.ik_handler.IK(*self.desired_pos)
        pwm_s, dir_s, pwm_e, dir_e = self.ik_handler.PIDs(*desired_angles, self.q[1], self.q[2])

        arm_command.direction = [dir_s, dir_e, 0, 0, 0]
        arm_command.speed = [pwm_s, pwm_e, 0, 0, 0]
        arm_command.sys_check = False
        arm_command.reset = False
        self.arm_publisher.publish(arm_command)

        

def main(args=None):
    rclpy.init(args=args)

    controller = ControllerNode()

    rclpy.spin(controller)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    controller.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()