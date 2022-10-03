# cook your dish here
for i in range(int(input())):
    x1,x2,y1,y2=input().split()
    x1,x2,y1,y2=int(x1),int(x2),int(y1),int(y2)
    if((y1/x1)<(y2/x2)):
        print(-1)
    elif ((y1/x1)==(y2/x2)):
        print(0)
    else:
        print(1)
