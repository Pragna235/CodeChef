# cook your dish here
for t in range(int(input())):
    x,a,b,c=map(int,input().split())
    mini=min(a,b,c)
    maxi=max(a,b,c)
    print((x-1)*mini+(a+b+c-mini-maxi))
    