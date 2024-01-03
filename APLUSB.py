# cook your dish here
for t in range(int(input())):
    n=int(input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    
    a.sort()
    b.sort()
    b.reverse()
    
    c=[a[i]+b[i] for i in range(n)]
    
    if(len(set(c))==1):
        print(*a)
        print(*b)
    else:
        print(-1)