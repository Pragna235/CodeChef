# cook your dish here
for i in range(int(input())):
    n,x,y=input().split()
    n,x,y=int(n),int(x),int(y)
    n=n+1 
    if((n*y)>=x):
        print("YES")
    else:
        print("NO")