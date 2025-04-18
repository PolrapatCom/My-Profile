import math

# a = 20; b = 11.25321
# print("%d"%a)
# print("%.2f"%b)

# x = 0==0
# print(x)

# n1 = float(24)
# n2 = float(3)
# print(n1/n2)

# def myinfo(): 
#     print("I am human")
# myinfo()

# ls = [2,3]
# print(sum(ls))

# str1 = ['jen','noon','bow','lisa']
# str2=str1
# str3=list(str1)
# str2[0]='god'
# str3[2]='mary'
# print('str1 :',str1)

# x = input()
# n1 , n2 = x.split()
# n1 , n2 = int(n1) , int(n2)
# print(n1,n2)
# print(math.ceil((n1/2)**2*3.14*n2))

# s = "python language"
# print(s[2:10])

# print([5,2]*3)

# a = [0,1]
# for i in range(1,100): 
#     temp = a[i] + i
#     a.append(temp)
# print(a[50])

# a = [0]
# for i in range(1,21): 
#     temp = 4*i + 3
#     a.append(temp)
# print(a)
# print(sum(a))

a = [0 for _ in range(102)]
a[101] = 5100
for i in range(101,0,-1): 
    a[i-1] =  i*i - a[i]
print(a)
print(a[101])
