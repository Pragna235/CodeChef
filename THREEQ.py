# cook your dish here
for t in range(int(input())):
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    o1=a.count(1)
    o2=b.count(1)
    z1=a.count(0)
    z2=b.count(0)
    if(o1==o2 and z1==z2):
        print("Pass")
    else:
        print("Fail")