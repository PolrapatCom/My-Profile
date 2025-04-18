import math

arr = [0 for i in range(1,27,1)]
# print(arr)
s = input()
n = len(s)
for i in range(n): 
    arr[ord(s[i])-ord('a')] += 1
# print(arr)
ans = math.factorial(n-2) * math.factorial(arr[4])
for i in range(26):
    ans /= math.factorial(arr[i])
print(int(ans))