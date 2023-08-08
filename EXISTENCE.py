# cook your dish here
for t in range(int(input())):
    x,y=map(int,input().split())
    if((pow(x,4) + (4*pow(y,2))) == (4*(pow(x,2)) * y) ):
        print("YES")
    else:
        print("NO")
