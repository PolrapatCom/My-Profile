from collections import *
from math import * 
from typing import List
import heapq

a = "8"
b = "5"
temp2 = ""
temp3 = ""
for i in range(len(a)): 
    if(a[i]=="#"): 
        temp2 += "3"
    else: 
        temp2 += a[i]
for i in range(len(b)): 
    if(b[i]=="#"): 
        temp3 += "3"
    else: 
        temp3 += b[i]        
ans = int(temp2) + int(temp3)
temp = str(ans)
ans2 = ""
for i in range(len(temp)): 
    if(temp[i]=="3"): 
        ans2 += "#"
    else: 
        ans2 += temp[i]
print(ans2)