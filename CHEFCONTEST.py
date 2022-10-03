# cook your dish here
for i in range(int(input())):
    x,y,p,q=input().split()
    x,y,p,q=int(x),int(y),int(p),int(q)
    x=x+(10*p)
    y=y+(10*q)
    if(x<y):
        print('Chef')
    elif (x==y):
        print("Draw")
    else:
        print("Chefina")
