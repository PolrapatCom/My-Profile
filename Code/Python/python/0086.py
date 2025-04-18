from collections import *
from math import * 
from typing import List
import heapq

w = 6
h = 5
table = [
  "######",
  "#x...#",
  "#...x#",
  "#x...#",
  "######"
]

def check(x,y): 
    for i in range(-1,2,1): 
        for j in range(-1,2,1): 
            r = x + i
            c = y + j
            if(r==x and c==y): 
                continue
            if(table[r][c]=="x"): 
                return True

ok =1
for i in range(h): 
    for j in range(w): 
        if(table[i][j]=="x"): 
            if(check(i,j)): 
                ok = 0
if(ok): 
    print("yes")
else: 
    print("no")