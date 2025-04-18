cnt = 0
for i in range(1,7): 
    for j in range(1,7): 
        for k in range(1,7): 
            if(i + j + k >=  15): 
                cnt += 1
print(cnt)