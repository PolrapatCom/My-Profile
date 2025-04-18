from collections import *
from math import * 
from typing import List
import heapq

start_time = "10:15"
end_time = "11:45"

arr1 = start_time.split(':')
arr2 = end_time.split(':')
h1 = int(arr1[0])
h2 = int(arr2[0])
m1 = int(arr1[1])
m2 = int(arr2[1])

h = 0
m = 0

if h1 == h2:
    if m1 > m2:
        h += 24-h1-1+h2
        m += m2-m1
    else:
        m += m2-m1
elif h1 > h2:
    h += 24-h1-1+h2
    m += 60-m1+m2
else:
    h += h2 - h1 - 1
    m += 60-m1+m2

while m >= 60:
    h += 1
    m -= 60
print(h*60 + m)
# print(f'{h}:{m}')