for i in range(int(input())):
    n,k,x,y=input().split()
    n,k,x,y=int(n),int(k),int(x),int(y)
    m=min(x,y)
    rem=n-k
    print(k*x + rem*m)