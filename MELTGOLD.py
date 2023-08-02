# cook your dish here
for t in range(int(input())):
    x,y=map(int,input().split())
    i=1
    cnt=0
    while(i>0):
        if(y>=x):
            break 
        else:
            y=y+i 
            cnt+=1 
            i+=1
    print(cnt)
