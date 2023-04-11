# cook your dish here
for i in range(int(input())):
    n,x=map(int,input().split())
    arr=list(map(int,input().split()))
    l=[]
    for ele in arr:
        #print(ele)
        if(ele>=x):
            l.append(ele)
            #print(l)
    print(len(l))
    