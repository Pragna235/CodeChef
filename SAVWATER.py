# cook your dish here
for t in range(int(input())):
    h,x,y,c=map(int,input().split())
    water=x+y//2
    if(h*water<=c):
        print("YES")
    else:
        print("NO")