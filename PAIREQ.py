# cook your dish h
for _ in range(int(input())):
    m=[]
    n=int(input())
    a=list(map(int,input().split(" ")))
    for i in a:
        s=a.count(i)
        m.append(s)
    print(n-max(m))
    
