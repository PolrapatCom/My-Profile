from collections import *
from math import * 
from typing import List
import heapq

p = 100
g = 187
i = 0
sum = 0
decrease = 1
while(sum<g and i < 100000): 
    decrease += p
    p = p//2
    sum += decrease
    i += 1
if(i==100000): 
    print("no")
else:
    print(i+1)