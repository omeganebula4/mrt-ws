from aruco_detection_interfaces.msg import PointArray
from aruco_detection_interfaces.msg import Point

class MyPointArray():
    def __init__(self, identity):
        self.identity = identity
    def addPoint(self, point):
        self.identity.append(point)