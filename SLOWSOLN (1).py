# cook your dish here
for t in range(int(input())):
    a,b,c=map(int,input().split())
    d=c//b
    e=int(c%b)
    if(d<a):
        print((d*b*b)+(e*e))
    else:
        print(a*b*b)
