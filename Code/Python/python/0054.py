lights = [0, 1, 0, 1, 0, 1]
n = len(lights)
idk = 0
for i in range(1,n): 
    if(lights[i]==lights[i-1]): 
        idk = 1
if(idk or lights[0]): 
    print("no")
else:
    print("yes")