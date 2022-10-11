# cook your dish here
for i in range(int(input())):
    n,l,x=map(int,input().split())
    r=n-l
    if(l<=r):
        print(l*x)
    else:
        print(r*x)
