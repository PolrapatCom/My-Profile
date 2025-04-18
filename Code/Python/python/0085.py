from collections import *
from math import * 
from typing import List
import heapq

points = [
    1000,
    950,
    950,
    900,
    800,
    600
]

n = len(points)
check = 1
for i in range(1,n): 
    if(points[i] > points[i-1]): 
        check = 0
check2 = 1
if(points[0] - points[n-1]<200): 
    check2 = 0
if(check and check2): 
    print("yes")
else:
    print("no")
     