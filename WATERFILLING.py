# cook your dish here
for t in range(int(input())):
    b1,b2,b3 = map(int,input().split())
    if((b1+b2+b3)<=1):
        print("Water filling time")
    else:
        print("Not now")