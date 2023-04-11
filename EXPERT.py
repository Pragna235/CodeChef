# cook your dish here
for t in range(int(input())):
    x,y=map(int,input().split())
    x=x*0.5
    if(y>=x):
        print("YES")
    else:
        print("NO")
