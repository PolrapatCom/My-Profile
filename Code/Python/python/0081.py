from collections import *
from math import * 
from typing import List
import heapq

w = 3
h = 4
table = [
  "x..",
  "x..",
  "..x",
  "..x"
]
ans = 0
for i in range(w):
    check = 1 
    for j in range(h): 
        if(table[j][i] != "."): 
            check = 0
    if(check == 1): 
        ans = 1
if(ans):
    print("yes")
else:
    print("no")