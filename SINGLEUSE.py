# cook your dish here
for t in range(int(input())):
    h,x,y=map(int,input().split())
    hits=1 
    h=h-y
    #print("h=",h,"x=",x)
    if((h)%x == 0):
        #print("if")
        hits+=(h)//x 
    else:
        #print("else")
        hits+=(h)//x + 1
    print(hits)