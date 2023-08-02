# cook your dish here
for t in range(int(input())):
    a,b,c,d=map(int,input().split())
    r1=[i for i in range(a,b+1)]
    r2=[i for i in range(c,d+1)]
    s=set(r1+r2)
    print(len(s))