from math import * 
num = input()
a = float(num.split()[0]) 
b = float(num.split()[1])
c = sqrt(pow(a,2)+pow(b,2))
print("{:.6f}".format(c))