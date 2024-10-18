from aruco_detection_interfaces.srv import ProcessImage
import sys
import rclpy
from rclpy.node import Node

from cv_bridge import CvBridge
import cv2

bridge = CvBridge()

class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('client_vid_async')
        self.cli = self.create_client(
            ProcessImage, 'process_image')       # CHANGE
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = ProcessImage.Request()                                   # CHANGE

    def send_request(self, image_message, path, current_frame):
        self.req.img = image_message
        self.req.path = path
        self.req.frame = current_frame
        self.req.imgorvid = True
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args=None):
    rclpy.init(args=args)

    minimal_client = MinimalClientAsync()

    vid_path = str(sys.argv[1])
    cap = cv2.VideoCapture(vid_path)
    if cap.isOpened():
        current_frame = 0
        while True:
            ret, frame = cap.read()
            if ret:
                if current_frame % 15 == 0:
                    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
                    # name = f'/home/harshit/mrt_ws/content/frameIn/frame{current_frame}.jpg'
                    # cv2.imwrite(name, gray)
                    image_message = bridge.cv2_to_imgmsg(gray, encoding='passthrough')

                    response = minimal_client.send_request(image_message, vid_path, current_frame)

                    if response is None:
                        numAruco = 0
                    else:
                        numAruco = len(response.imgbounds.ids)
                    output_string = "Frame " + str(current_frame) + "\nNumber of ArUco markers detected: " + str(numAruco) + '\n'
                    for i in range(numAruco):
                        output_string += "Marker " + str(i+1) + ": ID = " + str(response.imgbounds.ids[i]) + " Bounding Borders = "
                        for j in range(4):
                            output_string += '(' + ', '.join(map(str, response.imgbounds.bounds[i].rowpoints[j].coords)) + ') '
                        output_string += '\n'

                    minimal_client.get_logger().info(output_string)
            else:
                break
            current_frame += 1
        cap.release()
    cv2.destroyAllWindows()

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()