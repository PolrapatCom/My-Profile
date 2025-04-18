import math
a = math.ceil(int(input()))
b = math.ceil(int(input()))
temp = ""
nine = 0
for i in range(a,b+1): 
    temp += str(i)
for i in range(len(temp)): 
    if(temp[i]=="9"):
        nine += 1
print(nine)