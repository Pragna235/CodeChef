# cook your dish here
for t in range(int(input())):
    n,k=map(int,input().split())
    arr=list(map(int,input().split()))
    initial=sum(arr)
    for i in range(len(arr)):
        if(arr[i]>k):
            arr[i]=k 
    print(initial-sum(arr))