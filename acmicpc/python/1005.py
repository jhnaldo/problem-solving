import os
import graphlib

inputs = list(map(int, os.read(0, 100000000).split()))
inputs.reverse()

def read():
    return inputs.pop()

def readK(k):
    return [read() for _ in range(k)]

t = read()
for _ in range(t):
    n, k = readK(2)
    duration = readK(n)
    prev = {i: set() for i in range(n)}
    for _ in range(k):
        x, y = readK(2)
        prev[y - 1].add(x - 1)
    target = read() - 1

    torder = list(graphlib.TopologicalSorter(prev).static_order())

    total_time = {i: 0 for i in range(n)}

    for x in torder:
        total_time[x] = max(map(lambda p: total_time[p], prev[x]), default = 0) + duration[x]

    print(total_time[target])
