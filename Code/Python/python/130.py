x = 0.1e-99
def f(n): 
    return ((n+1)**(1/3)-1)/n
print(f(x)) 
x = -1 * x 
print(f(x))
print(x)