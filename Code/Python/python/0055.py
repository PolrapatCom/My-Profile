import sys
j = 0
q = ["english", "japanese", "thai", "french"]
for i in range(len(q)): 
    if(q[i]=="thai"): 
        print(i+1)
        j = 1
        break
        sys.exit()
if(j==0):
    print("no")