from typing import List

def f(i: int,temp: list[str],s: str,n: int,ans: list[str]) -> None: 
	if(i==n):
		ans.append(temp.copy())
		return
	for j in range(n):
		if(temp[j]=='0'): 
			temp[j] = s[i]
			f(i+1,temp,s,n,ans)
			temp[j] = '0'

# def findPermutations(s) -> List[List[str]]: 
# 	n = len(s)
# 	ans = [] 
# 	# temp = ['0'] * n
#     # print(n)
#     f(0,temp,s,n,ans)
#     return ans

def find_permutations(s: str) -> List[List[str]]:
    n = len(s)
    ans = []  # Consider initializing with an empty list if needed (depending on logic)
    temp = ['0'] * n
    # print(temp)
    # print(n)
    f(0, temp, s, n, ans)
    return ans
s = input()
copy = find_permutations(s)
leni = len(copy)
copy.sort()
for i in range(leni):
    print(copy[i])