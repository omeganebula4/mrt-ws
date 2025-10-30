from setuptools import find_packages
from setuptools import setup

setup(
    name='pos_control_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('pos_control_interfaces', 'pos_control_interfaces.*')),
)
