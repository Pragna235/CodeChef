# cook your dish here
for i in range(int(input())):
    x,y=map(int,input().split())
    if(x==y):
        print((x+y)-1)
    elif (y==0):
        print(x)
    else:
        print(x+y)