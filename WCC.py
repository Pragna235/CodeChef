# cook your dish here
for t in range(int(input())):
    x=int(input())
    points=input()
    c=points.count('C')
    d=points.count('D')
    n=points.count('N')
    
    #print(c,d,n)
    c=2*c 
    n=2*n 
    c+=d 
    n+=d 
    
    #print(c,d,n)
    
    if(c>n):
        print(60*x)
    elif(n>c):
        print(40*x)
    else:
        print(55*x)
        
