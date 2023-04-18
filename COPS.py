# cook your dish here
a=int(input())
for i in range(a):
    m,x,y=map(int,input().split())
    l2=list(map(int,input().split()))
    cop=x*y
    
    total=[i for i in range(1,101)]
    for i in range(m):
        searched=[]
        searched=[i for i in range(l2[i]-cop,l2[i]+cop+1)]
        total=[i for i in total if i not in searched]
        
    print(len(total))
        
    
        
        
