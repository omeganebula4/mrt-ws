from setuptools import find_packages
from setuptools import setup

setup(
    name='arm_pos_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('arm_pos_interfaces', 'arm_pos_interfaces.*')),
)
