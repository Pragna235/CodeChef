# cook your dish here
for t in range(int(input())):
    x,y,z=map(int,input().split())
    time=y//x
    if(z-time>=0):
        print(z-time)
    else:
        print(0)
