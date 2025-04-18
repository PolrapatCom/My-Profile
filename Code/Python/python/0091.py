from collections import *
from math import * 
from typing import List
import heapq
import copy

def f(arr,n,sum1,sum2,dp): 
    if(n==len(arr)):
        if(sum1 == sum2):  
            return True
        else: 
            return False
    return f(arr,n+1,sum1 + arr[n],sum2,dp) or f(arr,n+1,sum1,sum2 + arr[n],dp)
    if(dp[n][sum1][sum2]!=-1): 
        return dp[n][sum1][sum2]
    dp[n][sum1][sum2] = f(arr,n+1,sum1 + arr[n],sum2,dp) or f(arr,n+1,sum1,sum2 + arr[n],dp)
    return dp[n][sum1][sum2] 

def canPartition(sum,arr, n):
    # sum = 0
    # for i in range(n): 
    #     sum += arr[i]
    # if(sum%2==1): 
    #     return False
    dp = [[[-1 for _ in range(sum*2+1)]for _ in range(sum*2+1)]for _ in range(n)]
    return f(arr,0,0,0,dp)
    # Write your code here.
    pass

parts = [
  2,
  3,
  5,
  7,
  3
]

arr = copy.deepcopy(parts)
n = len(arr)
sum = 0
sent = 0
for i in range(n): 
    sum += arr[i]
for i in range(sum,-1,-1):
    sent == i//2
    if(canPartition(sent,arr,len(arr))): 
        print(sum)
        print(sent)
        print(sum - sent)
        break
# print(canPartition(arr,len(arr)))