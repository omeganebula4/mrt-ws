from aruco_detection_interfaces.srv import ProcessImage
import sys
import rclpy
from rclpy.node import Node

from cv_bridge import CvBridge
import cv2

bridge = CvBridge()

class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('client_img_async')
        self.cli = self.create_client(ProcessImage, 'process_image')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = ProcessImage.Request()

    def send_request(self):
        img_path = str(sys.argv[1])
        gray = cv2.cvtColor(cv2.imread(img_path), cv2.COLOR_BGR2GRAY)
        image_message = bridge.cv2_to_imgmsg(gray, encoding="passthrough")
        self.req.img = image_message
        self.req.path = img_path
        self.req.imgorvid = False
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args=None):
    rclpy.init(args=args)

    minimal_client = MinimalClientAsync()
    minimal_client.send_request()

    while rclpy.ok():
        rclpy.spin_once(minimal_client)
        if minimal_client.future.done():
            try:
                response = minimal_client.future.result()
            except Exception as e:
                minimal_client.get_logger().info('Service call failed %r' % (e,))
            else:
                numAruco = len(response.imgbounds.ids)
                output_string = "Number of ArUco markers detected: " + str(numAruco) + '\n'
                for i in range(numAruco):
                    output_string += "Marker " + str(i+1) + ": ID = " + str(response.imgbounds.ids[i]) + " Bounding Borders = "
                    for j in range(4):
                        output_string += '(' + ', '.join(map(str, response.imgbounds.bounds[i].rowpoints[j].coords)) + ') '
                    output_string += '\n'

                minimal_client.get_logger().info(output_string)

            break

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()