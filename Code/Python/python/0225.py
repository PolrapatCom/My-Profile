a = input()
n = len(a)
temp = ""
b = ""
c = []
def f(nums):
    temp_num = 0
    for i in range(8):
        temp_num += int(nums[i]) * (2**(7-i))
    return chr(temp_num) 
    
for i in range(n): 
    temp += a[i]
    if(len(temp)==2): 
        b += str((int(temp == "pe")))
        temp = ""
    if(len(b)==8): 
        c.append(b)
        b = ""
for i in c:
    print(f(i),end="")
        