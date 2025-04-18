n = 0
a = []
temp = 0
while(n>=0):
    temp = n 
    n = int(input())
    a.append(n)
print("Print the list node")
for i in range(len(a)-2): 
    print(a[i],end="-")
print(a[-2])