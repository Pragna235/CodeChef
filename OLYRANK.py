# cook your dish here
for i in range(int(input())):
    a,b,c,d,e,f=map(int,input().split())
    a=a+b+c 
    d=d+e+f
    if(a>d):
        print(1)
    else:
        print(2)
