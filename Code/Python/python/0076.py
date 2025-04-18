from collections import *
from math import * 
from typing import List
import heapq

scores = [40, 30, 10, 45, 100]
scores.sort(reverse=True)
ans = []
stop = 0
for k in range(0,max(scores)): 
    if(stop): 
        break
    for i in range(1,len(scores)): 
        if(scores[i-1] - scores[i] == k): 
            print(scores[i-1])
            print(scores[i])
            stop = 1
            break