import sys
import rclpy
import threading
from rclpy.node import Node
from std_msgs.msg import String

class AnglePub(Node):
    def __init__(self):
        super().__init__('angle_publisher')
        self.publisher_ = self.create_publisher(String, 'topic', 50)
        self.timer = self.create_timer(1, self.timer_callback)
        self.i = 0
    
    def timer_callback(self):
        if self.i < 5:
            msg = String()
            msg.data = 'Hello World: %d' % self.i
            self.publisher_.publish(msg)
            self.get_logger().info('Publishing: "%s"' % msg.data)
            self.i += 1
        else:
            rclpy.shutdown()
            return

def main(args=None):
    rclpy.init(args=args)
    minimal_publisher = AnglePub()

    # rclpy.spin() will now run and keep the node alive until shutdown is called
    rclpy.spin(minimal_publisher)

    # Cleanly destroy the node
    minimal_publisher.destroy_node()

if __name__ == '__main__':
    main()
