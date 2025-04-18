def maxSlidingWindow(arr, n, k):
    ans = [] 
    for i in range(n):
        maxi = -1e8 
        if(i+k<=n): 
            for j in range(i,i+k):
                maxi = max(maxi,arr[j])
            ans.append(maxi)
    return ans
    pass

ARR =  [3 ,2, -6, 1, 0] 
K = 3
print(maxSlidingWindow(ARR, len(ARR), K))