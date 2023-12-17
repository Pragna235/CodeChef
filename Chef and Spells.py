# cook your dish here
for t in range(int(input())):
    a,b,c=map(int,input().split())
    print(max(a+b,b+c,a+c))
