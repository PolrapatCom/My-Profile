a = input()
n = len(a)
b = []
temp = ""
for i in range(n): 
  k = ord(a[i])
  if(k>=ord('0') and k <= ord('9')): 
    temp += a[i]
  elif(temp): 
    b.append(int(temp))
    temp = ""
    # print(f"{i} : {a[i]} : {b}")
if(temp): 
    b.append(int(temp))
# print(b)
ans = str(sum(b))
while(len(ans)<4): 
    ans = "0" + ans
print(ans)