s = input()
temp = ""
a = []
for i in range(len(s)): 
    temp += s[i]
    if(len(temp)==3):
        a.append(temp)
        temp = ""
n = len(a)
start , end = 5e5 , 5e5
for i in range(n): 
    if(a[i] == "TAC"): 
        start = min(start,i)
    if(a[i] == "ATT" or a[i] == "ATC" or a[i] == "ACT"): 
        end = min(end,i)
print(end - start)