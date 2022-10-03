# cook your dish here
for i in range(int(input())):
    x,y,xr,yr,d=input().split()
    x,y,xr,yr,d=int(x),int(y),int(xr),int(yr),int(d)
    xr=d*xr
    yr=d*yr
    if(x>=xr and y>=yr):
        print("YES")
    else:
        print("NO")
