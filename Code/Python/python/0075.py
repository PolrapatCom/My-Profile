from collections import *
from math import * 
from typing import List
import heapq

a = 10
b = 7
cnt = 0
temp = [0 for _ in range(11)]
temp[a] = temp[b] = 1
for i in range(1,11,1): 
    # print(a+b+i)
    if(a+b+i>=21 and temp[i] == 0): 
        cnt += 1
# print(cnt)
print(int(cnt/8*100))