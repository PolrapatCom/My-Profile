cnt = 0
for i in range(6): 
    for j in range(6): 
        for k in range(6): 
            for l in range(6):
                if(i + j + k  + l == 10): 
                    cnt += 1
print(cnt)