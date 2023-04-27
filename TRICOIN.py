# cook your dish here
for t in range(int(input())):
    n=int(input())
    i=1
    count=0
    for i in range(1,n+1):
        i=i*(i+1)/2
        if(i>n):
            break
        else:
            count+=1 
    print(count)
        
        
    
    
        
        
    