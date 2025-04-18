n = eval(input())
if(type(n)==float and n != int(n)): 
    print(f"{n:.2f}")
else: 
    print(int(n))