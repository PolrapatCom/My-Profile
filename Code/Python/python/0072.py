from collections import *
from math import * 
from typing import List
import heapq

w = 8
h = 5
table = [
  "########",
  "#......#",
  "#......#",
  "#......#",
  "########",
]
check = 1
for i in range(h): 
    if(i==0 or i == h-1): 
        for j in range(w):
            if(table[i][j] != "#"): 
                check = 0
    else: 
        for j in range(w): 
            if(j==0 or j==w-1): 
                if(table[i][j] != "#"): 
                    check = 0
if(check): 
    print("yes")
else: 
    print("no")
            