# cook your dish here
for i in range(int(input())):
    x,y,z=input().split()
    x,y,z=int(x),int(y),int(z)
    cp=x*y
    sp=x*z
    print(sp-cp)