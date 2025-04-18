from collections import *
from math import * 
from typing import List
import heapq
import copy
# box_items = [-1, [2, -3, [4, -5, 6], []], -7]
box_items = [3,[-4,5],[[6,-7],8],9]

temp = []
idk = 0
n = len(box_items)
maxi = -1e8
for k in range(n*3):
    temp2 = 0
    for i in box_items:
        temp3 = 0 
        if(type(i)==int):
            idk += i
        else:
            if(type(j)==list): 
                for j in i: 
                    temp2 += j
                if(temp2>0): 
                    temp3 += temp2
            temp.append([*i])
        print(type(i))
    if(idk < 0): 
        idk = 0
    maxi = max(maxi,idk)
    box_items.clear()
    box_items = copy.deepcopy(temp)
    temp.clear()
    print(f"{maxi,box_items}")
print(maxi)
    