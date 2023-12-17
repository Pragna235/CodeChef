# cook your dish here
for t in range(int(input())):
    w1,w2,x1,x2,M = map(int,input().split())
    inc = w2-w1 
    minp = x1*M 
    maxp = x2*M 
    if(inc >= minp and inc <= maxp):
        print(1)
    else:
        print(0)
