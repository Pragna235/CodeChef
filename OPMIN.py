# cook your dish here
for t in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    mini=min(arr)
    l=[1 for i in arr if i>mini]
    print(len(l))