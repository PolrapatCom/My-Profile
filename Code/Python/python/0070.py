from collections import *
from math import * 
from typing import List
import heapq

z = 10
p = 50
i = 0
while p>0: 
    i += 1
    z , p = z+z,p-z
print(i)