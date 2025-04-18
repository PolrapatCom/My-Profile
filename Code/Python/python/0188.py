s = input()
n = len(s)
arr = []
temp = ""
for i in range(n): 
    if(ord(s[i])>=ord('0') and ord(s[i])<=ord('9')): 
        temp += s[i]
    elif(temp): 
        arr.append(int(temp))
        temp = str("")
if(temp): 
    arr.append(int(temp))
even = [ ] 
odd = [  ]
arr = list(set(arr))
n = len(arr)
for i in range(n): 
    if(arr[i]%2==0): 
        even.append(arr[i])
    else: 
        odd.append(arr[i])
even.sort()
odd.sort(reverse = True)
ans1 = ""
for i in range(len(even)): 
    if(i!=len(even)-1):
        ans1 += str(even[i]) + "-"
    else: 
        ans1 += str(even[i])
ans2 = ""
for i in range(len(odd)): 
    if(i!=len(odd)-1):
        ans2 += str(odd[i]) + "-"
    else: 
        ans2 += str(odd[i])
if(even):
    print(f"EVEN : {ans1}")
if(odd):
    print(f"ODD : {ans2}")
# EVEN : 2-4-6
# ODD : 5-3-1
        