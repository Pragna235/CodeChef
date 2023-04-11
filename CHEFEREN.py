# cook your dish here
for t in range(int(input())):
    n,a,b=map(int,input().split())
    c1=0
    for i in range(1,n+1):
        if(i%2==0):
            c1+=a 
        else:
            c1+=b
    print(c1)
