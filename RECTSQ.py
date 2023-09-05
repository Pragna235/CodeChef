# cook your dish here
for t in range(int(input())):
    n,m=map(int,input().split())
    
    for i in range(1,min(m,n)+1):
        if(n%i==0 and m%i==0):
            j=i
    print((m*n)//(j*j))

