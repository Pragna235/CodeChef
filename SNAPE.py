# cook your dish here
import math
for t in range(int(input())):
    a,b=map(int,input().split())
    c=math.pow(a,2)
    d=math.pow(b,2)
    q=c+d;
    w=abs(c-d)
    x=math.sqrt(q)
    y=math.sqrt(w)
  
    print(round(y,4),round(x,4))
    