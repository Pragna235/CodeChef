# cook your dish here
for t in range(int(input())):
    n,k,v=map(int,input().split())
    elements=list(map(int,input().split()))
    sums=sum(elements)
    avg=(n+k)*v 
    tot=avg-sums
    if(tot%k==0 and tot/k>0):
        print(tot//k)
    else:
        print(-1)
    