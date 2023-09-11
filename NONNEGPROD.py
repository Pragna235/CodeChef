# cook your dish here
for t in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    count,zero=0,0
    for i in arr:
        if(i==0):
            zero=1 
        elif(i<0):
            count+=1 
    if(zero):
        print(0)
    elif(count%2==0):
        print(0)
    else:
        print(1)
            
    
        
            