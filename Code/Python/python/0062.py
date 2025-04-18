def f(arr,n,sum1,sum2,dp): 
    if(n==len(arr)):
        if(sum1 == sum2):  
            return True
        else: 
            return False
    if(dp[n][sum1][sum2]!=-1): 
        return dp[n][sum1][sum2]
    dp[n][sum1][sum2] = f(arr,n+1,sum1 + arr[n],sum2,dp) or f(arr,n+1,sum1,sum2 + arr[n],dp)
    return dp[n][sum1][sum2] 

def canPartition(arr, n):
    sum = 0
    for i in range(n): 
        sum += arr[i]
    if(sum%2==1): 
        return False
    dp = [[[-1 for _ in range(sum//2+1)]for _ in range(sum//2+1)]for _ in range(n)]
    return f(arr,0,0,0,dp)
    # Write your code here.
    pass

arr = [5,6,5,11,6]
print(canPartition(arr,len(arr)))