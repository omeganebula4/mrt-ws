from min_jerk import min_jerk
import numpy as np
import math
import time
import threading
import ast

class QueueCommand:
    def __init__(self, freq):
        self.queue = []
        self.idle = True
        self.current_pos = [0, 0]
        self.sample_freq = freq
    
    def peek(self):
        if len(self.queue) == 0:
            return None
        return self.queue[0]

    def dequeue(self):
        if len(self.queue) == 0:
            return None

        return self.queue.pop(0)
    
    def add(self, elem):
        self.queue.append(elem)

    def updatePos(self, new_pos):
        self.current_pos = new_pos
    
    def updateState(self, s):
        self.idle = s

def getCommandList(current_pos, waypoints, timepoints, sample_freq):
    pos = waypoints
    pos.insert(0, current_pos)
    pos = np.array(pos)

    total_time = timepoints[-1]
    tp = timepoints
    tp.pop()
    tp = np.array(tp) * sample_freq

    dur = math.ceil(total_time * sample_freq) + 1
    traj, psg = min_jerk(pos, dur, None, None, tp)

    t = np.linspace(0, total_time, dur)
    return traj, t

def sendCommand(desired_pos, t):
    global queue
    print("Reaching ", desired_pos)
    time.sleep(t)
    queue.updatePos(desired_pos)
    print("Reached ", desired_pos)

def execCommand(traj, t):
    print("Starting Position: ", traj[0])
    for idx in range(len(t)-1):
        sendCommand(traj[idx+1], t[idx+1] - t[idx])

def getInput(lock):
    global queue
    while True:
        inp = input()
        coords, times = ast.literal_eval(f"({inp})")
        coords = [[coords[i], coords[i+1]] for i in range(0, len(coords), 2)]
        with lock:
            queue.add((coords, times))

def processCommands(lock):
    global queue
    while True:
        with lock:
            if len(queue.queue) == 0:
                continue
            
            queue.updateState(False)
            wp, tp = queue.dequeue()
            execCommand(*getCommandList(queue.current_pos, wp, tp, queue.sample_freq))
            queue.updateState(True)

def main():
    global queue
    queue = QueueCommand(10)

    lock = threading.Lock()

    t1 = threading.Thread(target=processCommands, args=(lock,))
    t2 = threading.Thread(target=getInput, args=(lock,))
    
    t1.start()
    t2.start()

    t1.join()
    t2.join()
    

if __name__ == '__main__':
    main()
    