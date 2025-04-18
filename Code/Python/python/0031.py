from typing import *
import copy

ans = []

def f(idx,target,temp,arr): 
    if(idx == -1): 
        temp.sort(reverse = False)
        ans.append(copy.deepcopy(temp)) 
        # print(temp)
        return
    check = target - arr[idx]
    if(check >= 0):
        temp.append(arr[idx]) 
        # print(temp)
        f(idx,check,temp,arr)
        temp.pop()
        # print(temp)
    f(idx-1,target,temp,arr)
    pass

def combSum(ARR, B):
    temp = []
    f(len(ARR)-1,B,temp,ARR)
    return ans
    pass

ARR = [1, 2, 3]  
B = 5
print(combSum(ARR, B))
temp3 = copy.deepcopy(ans)
# print(temp3)
temp4 = list((tuple(x) for x in ans))
temp5 = [list(x) for x in temp4]
print(temp5)
# temp2 = list(set(ARR))
# print(temp2)