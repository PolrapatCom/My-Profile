def largestRectangle(arr):
    sum = 0
    n = len(arr)
    for i in range(n):
        mini = arr[i]
        for j in range(i,n): 
            mini = min(arr[j],mini) 
            sum = max(sum,(mini*(j-i+1)))            
    return sum
    pass

arr = [2, 1, 5, 6, 2, 3]
print(largestRectangle(arr))
