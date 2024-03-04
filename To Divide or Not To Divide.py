# cook your dish here
for i in range(int(input())):
    a,b,n=map(int,input().split())
    j=n-(n%a)
    if a%b==0:
        print(-1)
    else:
        if n%a!=0:
            j+=a
        if j%b==0:
            j+=a
        print(j)
            
        

    
