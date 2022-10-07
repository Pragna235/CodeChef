# cook your dish here
for i in range(int(input())):
    h,x,y,c=map(int,input().split())
    water_for_each=c/h
    con=x+(y//2)
    if(con<=water_for_each):
        print("YES")
    else:
        print("NO")
