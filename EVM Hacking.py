# cook your dish here
for _ in range(int(input())):
    a,b,c,p,q,r=map(int, input().split())
    e=(p+q+r)/2
    if(((p+b+c) > e) or ((a+q+c)>e)  or ((a+b+r) >e) or (a+b+c) > e):
        print("YES")
    else:
        print("NO")
