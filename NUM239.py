# cook your dish here
for i in range(int(input())):
    count=0
    l,r=input().split()
    l,r=int(l),int(r)
    for j in range(l,r+1):
        if(j%10==2 or j%10==3 or j%10==9):
            count+=1
    print(count)
