from collections import *
from math import * 
from typing import List
import heapq

start_time = "10:15"
end_time = "11:45"

arr2 = start_time.split(':')
arr = end_time.split(':')
temp1 = int(arr[0]) - int(arr2[0])
if(temp1 < 0): 
    temp1 += 24
temp2 = int(arr[1]) - int(arr2[1])
if(temp2 < 0): 
    temp2 += 60
    temp1 += 1
# print(temp1)
# print(temp2)
print(temp1*60 + temp2)