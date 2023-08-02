# cook your dish here
for t in range(int(input())):
    a=list(map(int,input().split()))
    c1,c2=0,0
    for i in range(len(a)):
        if(i%2==0 and a[i]==1):
            c1+=1 
        elif(i%2!=0 and a[i]==1):
            c2+=1 
    if(c1>c2):
        print(1)
    elif(c1==c2):
        print(0)
    else:
        print(2)
