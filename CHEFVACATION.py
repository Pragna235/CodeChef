# cook your dish here
for i in range(int(input())):
    x,y,z=map(int,input().split())
    if((x+y)<=z):
        print("Yes")
    else:
        print("NO")
