# cook your dish here
import math
for t in range(int(input())):
    l,r,m=map(int,input().split())
    pages=m/l 
    lines=m//r
    print(math.ceil(pages+lines))