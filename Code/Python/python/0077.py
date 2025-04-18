from collections import *
from math import * 
from typing import List
import heapq

w = 6
h = 5
table = [
  "555555",
  "5ToT55",
  "5555T5",
  "5555o5",
  "5555T5"
]
def check(i,j):
    if(table[i][j]=="T" and table[i][j+1] == "o" and table[i][j+2]=="T"): 
        return True
    return False
def check2(i,j):
    if(table[i][j]=="T" and table[i+1][j] == "o" and table[i+2][j]=="T"): 
        return True
    return False
cnt = 0
for i in range(h): 
    for j in range(w): 
        if(w-j>=3): 
            if(check(i,j)): 
                cnt += 1
        if(h-i>=3): 
            if(check2(i,j)):
                cnt += 1
print(cnt)