import numpy as np

waypoints = [[1.0, 2.1], [3.2, 1.0], [10.4, 4]]
current_pos = np.array([0.4, 1.2], dtype=np.float64)
print(current_pos)
print(type(current_pos[0]))
pos = np.array(waypoints)
print(pos)
pos = np.insert(pos, 0, current_pos, axis=0)
print(pos)