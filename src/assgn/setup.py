from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'assgn'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(
            os.path.join('launch', 'mrs_hudson_world.launch.py'))),
        (os.path.join('share', package_name, 'models'),
         glob(os.path.join('models', 'mrs_hudson.urdf'))),
        (os.path.join('share', package_name, 'config'),
         glob(os.path.join('config', 'mrs_hudson.rviz'))),
        (os.path.join('share', package_name, 'worlds'),
         glob(os.path.join('worlds', 'mrs_hudson_arena.sdf'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='harshit',
    maintainer_email='harshitsomani09@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            '96 = assgn.96:main'
        ],
    },
)
