# cook your dish here
import math
for t in range(int(input())):
    n,k=map(int,input().split())
    print(math.comb(n-1,k-1))