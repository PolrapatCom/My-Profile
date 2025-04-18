from collections import *
from math import * 
from typing import List
import heapq

ans = [
  "electrical",
  "electrical",
  "electrical",
  "admin",
  "electrical"
]

temp = Counter(ans)
Um = ""
for key,value in temp.items():
    if(value==1): 
         Um = key
impos = -1
for i in range(len(ans)): 
    if(ans[i]==Um): 
        impos = i+1
if(impos != -1 and len(temp) == 2): 
    print(impos)
else:
    print("no")