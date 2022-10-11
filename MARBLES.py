# cook your dish here
for i in range(int(input())):
    n,k=map(int,input().split())
    m=1 
    for i in range(1,k):
         m=m*(n-k+i)//i
    print(m)