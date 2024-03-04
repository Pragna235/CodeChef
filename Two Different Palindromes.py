# cook your dish here
for _ in range (int(input())):
    a,b=map(int,input().split())
    if a<2 or b<2:
        print("No")
    elif b%2==0  or  a%2==0 :
        print("Yes")
    else:
        print("No")
