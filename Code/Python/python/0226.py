cnt = 0
for i in range(1,1001): 
    s = str(i)
    n = len(s)
    for j in range(n): 
        if(s[j]=="0"): 
            cnt += 1
print(cnt)
        