# cook your dish here
for t in range(int(input())):
    n=int(input())
    A=list(map(int,input().split()))
    maxi=0
    for i in range(n-1):
        maxi=max(maxi,A[i]+A[i+1])
    print(max(maxi,A[0]+A[n-1]))