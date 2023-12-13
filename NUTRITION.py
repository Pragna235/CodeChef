# cook your dish here
for t in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    
    unique = set(a)
    total=0
    nutrition = {}
    
    for i in range(len(a)):
        if(b[i]>=0):
            if a[i] not in nutrition:
                nutrition[a[i]] = b[i]
                #print(a[i],b[i])
            else:
                nutrition[a[i]] = max(nutrition[a[i]],b[i])
            
    for key in nutrition:
        total+=nutrition[key]
    
    print(total)
    
            
            