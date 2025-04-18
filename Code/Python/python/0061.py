from typing import List

def maxProfit(prices: List[int]) -> int: 
    n = len(prices)
    dp = [[[0 for _ in range(3)]for _ in range(2)]for _ in range(n+1)] 
    for i in range(n-1,-1,-1): 
        for buy in range(2): 
            for cnt in range(2): 
                if(buy == 0): 
                    dp[i][buy][cnt] = max(dp[i+1][0][cnt],-prices[i] + dp[i+1][1][cnt]) 
                else: 
                    dp[i][buy][cnt] = max(dp[i+1][1][cnt], prices[i] + dp[i+1][0][cnt+1])
    print(dp)
    return dp[0][0][0]            
    # Write your code here.
    pass

arr = [6 ,1 ,3 ,1 ,2 ,4 ,8] 
hi = maxProfit(arr)
print(hi)