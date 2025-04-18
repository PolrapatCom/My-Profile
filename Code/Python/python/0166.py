a = input()
b = input()
temp1 , temp2 = "" , ""
a = str(int(a) + int(b))
for i in range(len(a)-1,-1,-1): 
    temp1 += a[i] 
for i in range(len(b)-1,-1,-1): 
    temp2 += b[i]
print(temp1)