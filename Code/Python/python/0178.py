s = int(input())
m = s//60
s = s%60
h = m//60
m = m%60
if(s == 0): 
    s = "00"
if(m == 0): 
    m = "00"
if(h == 0):
    h = "0"
print(f"{h}:{m}:{s}")