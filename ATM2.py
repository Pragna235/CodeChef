# cook your dish here
for t in range(int(input())):
    n,k=map(int,input().split())
    arr=list(map(int,input().split()))
    yn=[0 for i in range(n)]
    for i in range(n):
        if(arr[i]<=k):
            k-=arr[i]
            yn[i]=1
    print(*yn,sep='')
            
