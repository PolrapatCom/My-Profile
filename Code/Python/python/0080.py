from collections import *
from math import * 
from typing import List
import heapq

a = 15
i = 1
check = 0
sum = 0
while(sum<=a): 
    sum += i
    if(sum==a): 
        check = 1
        break
    i+=1
if(check): 
    print("yes")
else: 
    print("no")