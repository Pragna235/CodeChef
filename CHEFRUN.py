# cook your dish here
for t in range(int(input())):
    x1,x2,x3,v1,v2=input().split()
    x1,x2,x3,v1,v2=int(x1),int(x2),int(x3),int(v1),int(v2)
    d1=abs(x1-x3)
    d2=abs(x2-x3)
    t1=v1/d1
    t2=v2/d2
    if(t1<t2):
        print("Kefa")
    elif(t1>t2):
        print("Chef")
    else:
        print("Draw")
    