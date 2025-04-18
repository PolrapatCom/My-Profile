from collections import *
from math import * 
from typing import List
import heapq

s = "N🙏m🙏 t🙏d sr🙏 p🙏k🙏w🙏t🙏"
chars = "aouaaaao"

n = len(s)
s = list(s)
j = 0
for i in range(n): 
    if(s[i]=="🙏"): 
        s[i] = chars[j]
        j += 1
str = ""
for i in s:
    str += i
print(str)