from aruco_detection_interfaces.srv import ProcessImage
import rclpy
from rclpy.node import Node

from cv_bridge import CvBridge
import cv2

bridge = CvBridge()

class MinimalService(Node):

    def __init__(self):
        super().__init__('service')
        self.srv = self.create_service(ProcessImage, 'process_image', self.process_image_callback)        # CHANGE

    def process_image_callback(self, request, response):

        cv_image = bridge.imgmsg_to_cv2(request.img, desired_encoding='passthrough')
        aruco_dict = cv2.aruco.getPredefinedDictionary(cv2.aruco.DICT_4X4_250)
        parameters = cv2.aruco.DetectorParameters()

        detector = cv2.aruco.ArucoDetector(aruco_dict, parameters)
        corners, ids, rejected = detector.detectMarkers(cv_image)
        
        for i in range(len(corners)):
            for j in range(4):
                response.imgbounds.bounds[i].rowpoints[j].coords = corners[i][0][j]
        
        if ids is None:
            pass
        else:
            response.imgbounds.ids = ids.ravel().tolist()

        output_string = 'Incoming Request: '
        if(request.imgorvid):
            output_string += "Video Path: " + request.path + " Frame Number: " + str(request.frame)
        else:
            output_string += "Image Path: " + request.path
        
        self.get_logger().info(output_string)

        return response

def main(args=None):
    rclpy.init(args=args)

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()