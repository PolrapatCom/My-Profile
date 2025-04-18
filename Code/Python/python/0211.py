n = int(input())
a = [ ]
for i in range(n): 
    temp = int(input())
    s = input()
    a.append([temp,s])
a.sort(key = lambda x: x[0])
for i in range(n): 
    print(f"Chapter {i+1}\n{a[i][1]}")