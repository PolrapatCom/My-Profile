from collections import *
from math import * 
from typing import List
import heapq

def check(n):
    if(n<2): 
        return False
    if(n==2): 
        return True 
    for i in range(2,n): 
        if(n%i == 0): 
            return False
    return True

n = 100
for i in range(n,1,-1): 
    if(check(i)): 
        print(i)
        break