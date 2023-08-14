# cook your dish here
for t in range(int(input())):
    n,y=map(int,input().split())
    arr=list(map(int,input().split()))
    xor=0
    for i in arr:
        xor|=i 
    c=0 
    for i in range(y+1):
        if(xor|i==y):
            #print(i)
            c+=1 
            break 
    if(c==1):
        print(i)
    else:
        print(-1)