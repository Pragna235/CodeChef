# cook your dish here
for i in range(int(input())):
    a,b=map(int,input().split())
    if(a>=b):
        maxi=a
    else:
        maxi=b
    print(maxi,a+b)