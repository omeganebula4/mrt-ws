from setuptools import find_packages
from setuptools import setup

setup(
    name='all_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('all_interfaces', 'all_interfaces.*')),
)
