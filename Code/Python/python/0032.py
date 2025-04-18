from typing import List

def getTrappedWater(arr: List[int], n: int) -> int:
    l = 0
    r = n -1
    maxl = arr[l]
    maxr = arr[r]
    sumi = 0
    while l<r:
        if(maxl < maxr):
            l+=1
            maxl = max(maxl,arr[l])
            sumi += maxl - arr[l]
        else: 
            r+=-1
            maxr = max(maxr,arr[r])
            sumi += maxr - arr[r]
        # print(f"{l,r,sumi}")
    return sumi
    pass 

n = 6
arr = [3, 0, 0, 2, 0, 4]
print(getTrappedWater(arr,n))