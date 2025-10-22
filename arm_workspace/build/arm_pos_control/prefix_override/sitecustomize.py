import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/harshit/mrt_ws/arm_workspace/install/arm_pos_control'
