# cook your dish here
for t in range(int(input())):
    n,x,y = map(int,input().split())
    
    if(x<n):
        print("NO")
    elif(x==n and y<(3*n)):
        print("NO")
    else:
        p=y//3 
        req = n-p
        x-=p
        if(x<(2*req)):
            print("NO")
        else:
            print("YES")