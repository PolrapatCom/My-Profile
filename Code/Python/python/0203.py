n =  int(input())
a = n//1000
n %= 1000
b = n // 500 
n %= 500
c = n // 100 
print(f"1000 * {a}")
print(f"500 * {b}")
print(f"100 * {c}")