from setuptools import find_packages
from setuptools import setup

setup(
    name='aruco_detection_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('aruco_detection_interfaces', 'aruco_detection_interfaces.*')),
)
