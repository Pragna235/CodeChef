# cook your dish here
for t in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    hol=[6,13,20,27,7,14,21,28]
    count=0
    for i in a:
        if i not in hol:
            count+=1
    print(count+8)