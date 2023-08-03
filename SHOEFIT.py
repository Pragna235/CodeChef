# cook your dish here
for t in range(int(input())):
    a=list(map(int,input().split()))
    if(a.count(0)==3 or a.count(1)==3):
        print(0)
    else:
        print(1)