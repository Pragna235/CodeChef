# cook your dish here
for i in range(int(input())):
    a,b,c=input().split()
    x,y=input().split()
    preference=a+b+c
    k=preference.find(x)
    l=preference.find(y)
    if(k<=l):
        print(x)
    else:
        print(y)