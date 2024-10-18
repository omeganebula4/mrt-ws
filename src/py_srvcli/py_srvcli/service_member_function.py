from tutorial_interfaces.srv import ProcessImage     # CHANGE

import rclpy
from rclpy.node import Node

from cv_bridge import CvBridge
import cv2

bridge = CvBridge()

class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(ProcessImage, 'process_image', self.process_image_callback)        # CHANGE

    def process_image_callback(self, request, response):

        cv_image = bridge.imgmsg_to_cv2(request.img, desired_encoding='passthrough')
        aruco_dict = cv2.aruco.getPredefinedDictionary(cv2.aruco.DICT_6X6_250)
        parameters = cv2.aruco.DetectorParameters()

        detector = cv2.aruco.ArucoDetector(aruco_dict, parameters)
        corners, ids, rejected = detector.detectMarkers(cv_image)
        
        for i in range(len(corners)):
            for j in range(4):
                response.imgbounds.bounds[i].rowpoints[j].coords = corners[i][0][j]

        print(ids.ravel())
        response.imgbounds.ids = ids.ravel().tolist()
        self.get_logger().info('Incoming request') # CHANGE

        return response

def main(args=None):
    rclpy.init(args=args)

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()