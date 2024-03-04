# cook your dish here
for i in range(int(input())):
    a,b,p,q=map(int,input().split())
    s=a+b
    d=p+q
    r1=s%2
    r2=d%2
    if a==p and b==q:
        print(0)
    elif r1==r2: 
        print("2")
    else:
        print("1")
