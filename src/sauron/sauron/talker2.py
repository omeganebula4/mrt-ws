import rclpy
from std_msgs.msg import String

def timer_callback(timer, i):
    msg = String()
    msg.data = 'Build me an army worthy of Mordor.'

    publisher.publish(msg)

    print('Publishing: "%s"' % msg.data)

def main(args=None):
    rclpy.init(args=args)

    node = rclpy.create_node('publisher2')

    global publisher
    publisher = node.create_publisher(String, 'listen_2', 10)

    timer_period = 0.5

    i = 0

    timer = node.create_timer(timer_period, lambda: timer_callback(timer, i))

    i += 1

    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()