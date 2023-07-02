# cook your dish here
for t in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    dep=list(map(int,input().split()))
    
    t=0
    maxc=0
    c=0
    
    while(t<=max(max(arr),max(dep))):
        if(t in arr):
            c+=arr.count(t)
        if(t in dep):
            c-=dep.count(t)
        if(c>=maxc):
            maxc=c 
        t+=1
        
    print(maxc)
    
    
    
    
    
    
    
    
    
   