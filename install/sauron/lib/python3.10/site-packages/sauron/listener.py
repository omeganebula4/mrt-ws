import rclpy
from std_msgs.msg import String

def listener_callback1(msg):
    print('%s ' % msg.data, end='')

def listener_callback2(msg):
    print('%s' % msg.data)

def main(args=None):
    rclpy.init(args=args)

    node = rclpy.create_node('subscriber')

    subscription1 = node.create_subscription(String, 'listen_1', listener_callback1, 10)
    subscription2 = node.create_subscription(String, 'listen_2', listener_callback2, 10)

    subscription1
    subscription2

    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()