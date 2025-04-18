from typing import List
import copy

def f(idx,n,s,temp,ans): 
    if(idx==n): 
        ans.append(copy.deepcopy(temp))
        return
    f(idx+1,n,s,temp + s[idx],ans)
    f(idx+1,n,s,temp,ans)

def generateSubsequences(s:str) -> List[str]:
    ans = [] 
    n = len(s) 
    temp = "" 
    f(0,n,s,temp,ans)
    return ans
    pass

print(generateSubsequences("abc"))
# hi = "hi"
# hello = hi
# hello = "hello"
# print(hi)
# print(hello)