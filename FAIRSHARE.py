# cook your dish here
for t in range(int(input())):
    n,k = map(int,input().split())
    
    share = n//(k+1)
    
    print(n - (k*share))