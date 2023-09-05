# cook your dish here
for t in range(int(input())):
    p,m,v=map(int,input().split())
    print(v*(m-(p-1)))
