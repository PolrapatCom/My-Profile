big = 1
small = 1
s = input()
n = len(s)
for i in range(n):
    if(ord(s[i])>=ord('a') and ord(s[i])<=ord('z')): 
        big += -20000
    elif(ord(s[i])>=ord('A') and ord(s[i])<=ord('Z')): 
        small += -20000
if(big > 0): 
    print("All Capital Letter") 
elif(small > 0): 
    print("All Small Letter")
else: 
    print("Mix") 
    