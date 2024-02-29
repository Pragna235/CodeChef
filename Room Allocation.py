# cook your dish here
for t in range(int(input())):
    n = int(input())
    clg = list(map(int,input().split()))
    rooms = 0
    
    for i in range(n):
        if(clg[i]%2==0):
            rooms += clg[i]//2
        else:
            rooms+=1 + (clg[i]//2)
            
    print(rooms)
        
