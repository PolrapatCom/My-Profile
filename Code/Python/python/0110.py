import pandas as pd

ls = []

for i in range(1,2201):
    p = i 
    if(((2200-p)**3)%p==0): 
        print(p)
        ls.append(p)
print(ls)