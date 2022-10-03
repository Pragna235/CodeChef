# cook your dish here
for i in range(int(input())):
    q,p=input().split()
    q,p=int(q),int(p)
    if(q<1000):
        print(q*p)
    else:
        print((q*p)-((q*p)*0.1))