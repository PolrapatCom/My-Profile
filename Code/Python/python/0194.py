a , b = list(map(float,input().split()))
direction = input()
cnt = int(input())
if(direction == "right"): 
    print("B       A")
else: 
    print("A       B")
while(cnt): 
    if(direction == "right"):   
        print("--------|")
        print("=========")
        print("|--------")
        print("=========")
    else: 
        print("|--------")
        print("=========")
        print(("--------|"))
        print("=========")
    cnt -= 1
if(direction == "right"): 
    print("--------|")
else: 
    print("|--------")
s = " " * (9-len(str(int(a) if int(a)==a else a))-len(str(int(b) if int(b)==b else b)))
# print(f"{len(str(a))}{len(str(b))}")
print(f"{int(a) if int(a)==a else a}{s}{int(b) if int(b)==b else b}")
print("Game End")
if((a > b and direction == "left") or (a < b and direction == "right")): 
    print(f"A is the Winner, got {max(int(a) if int(a)==a else a,int(b) if int(b)==b else b)}")
    print(f"B is the Loser, got {min(int(a) if int(a)==a else a,int(b) if int(b)==b else b)}")
else: 
    print(f"B is the Winner, got {max(int(a) if int(a)==a else a,int(b) if int(b)==b else b)}")
    print(f"A is the Loser, got {min(int(a) if int(a)==a else a,int(b) if int(b)==b else b)}")
# Input:

# 400 200
# right
# 2
# Output:

# B       A
# --------|
# =========
# |--------
# =========
# --------|
# =========
# |--------
# =========
# --------|
# 400   200
# Game End
# B is the Winner, got 400
# A is the Loser, got 200
