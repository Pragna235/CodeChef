# cook your dish here
for t in range(int(input())):
    p,l=map(int,input().split())
    
    per = (l/p)*100 
    
    if(per>=75):
        print("YES")
    else:
        print("NO")
    