from typing import List

def f(i: int, temp: List[str], s: str, n: int, ans: List[str]) -> None:
    if i == n:
        ans.append(temp.copy())
        return
    for j in range(n):
        if temp[j] == '0':
            temp[j] = s[i]
            f(i + 1, temp, s, n, ans)
            temp[j] = '0'

def find_permutations(s: str) -> List[List[str]]:
    n = len(s)
    ans = []  # Consider initializing with an empty list if needed (depending on logic)
    temp = ['0'] * n
    print("temp = ",temp)
    print(n)
    f(0, temp, s, n, ans)
    return ans
s = "12345"
permutations = find_permutations(s)
n = len(permutations)
m = len(permutations[0])
permutations.sort()
for i in range(n):
    str = "" 
    for j in range(m): 
        str += permutations[i][j] + " "
    print(str)
# print(permutations)