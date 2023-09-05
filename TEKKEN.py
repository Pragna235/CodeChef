# cook your dish here
for t in range(int(input())):
    a,b,c=map(int,input().split())
    diff=abs(b-c)
    if(a>diff):
        print("YES")
    else:
        print("NO")
