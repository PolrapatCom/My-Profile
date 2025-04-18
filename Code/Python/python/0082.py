from collections import *
from math import * 
from typing import List
import heapq

code = "LEMON"
c1 = 1
c2 = 3

c1 -= 1
c2 -= 1
n = len(code)
code = list(code)
n1 , n2 = code[c1] , code[c2]
code[c1] = n2
code[c2] = n1
str = ""
for i in code: 
    str += i
print(str)
