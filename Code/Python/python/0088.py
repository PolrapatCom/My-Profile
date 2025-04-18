from collections import *
from math import * 
from typing import List
import heapq

cid = "48547012452x9"
# cid = "3100x02602436"

n = len(cid)
wanted = 0
sum = 0
j = 13
for i in range(n):
    if(cid[i]=="x"): 
        wanted = j
        j -= 1
        continue 
    sum += int(cid[i])*(j)
    j -= 1
ans = 0
last = cid[12]
# print(wanted)
# print(sum)
for i in range(10): 
    if((11-((i*wanted+sum)%11))%10==int(last)): 
        # print(i*wanted+sum)
        # print(i)
        ans = i
# print(last)
# print("ans")
print(ans)