a = input().split(',')
n = len(a)
a[0] = a[0][1:]
a[n-1] = a[n-1][:-1]
a = list(map(int,a))
# if(2*max(a)>sum(a)){
    
# }
print("true" if 2*max(a)<sum(a) else "false")