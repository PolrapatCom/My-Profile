from sys import stdin


def getMaximumProfit(values, n) :
    dp = [[-1 for _ in range(2)]for _ in range(n+1)] 
    dp[n][0] = dp[n][1] = 0 
    for i in range(n-1,-1,-1):
        for buy in range(2):    
            if(buy==0): 
                dp[i][buy] = max(dp[i+1][0],-values[i]+dp[i+1][1])
            else: 
                dp[i][buy] = max(dp[i+1][1],values[i]+dp[i+1][0])
    return dp[0][0]
    pass
	#Your code goes here




#taking input using fast I/O
def takeInput():
    n = int(stdin.readline().rstrip())

    if n == 0 :
        return list(), 0

    values = list(map(int, stdin.readline().rstrip().split(" ")))
    return values, n


#main
t = int(stdin.readline().rstrip())

while t > 0 :
    values, n = takeInput()
    print(getMaximumProfit(values, n))
    t -= 1
