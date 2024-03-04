# cook your dish here
t=int(input())
for i in range(t):
    n,u,d=map(int,input().split())
    l=list(map(int,input().split()))
    parachute=True
    j=0
    while j<n-1:
        if l[j]-l[j+1]>0 and l[j]-l[j+1]<=d:
            j+=1
        elif l[j]-l[j+1]>0 and parachute:
            j+=1
            parachute=False
        elif l[j+1]-l[j]>0 and l[j+1]-l[j]<=u:
            j+=1
        elif l[j]==l[j+1]:
            j+=1
        else:
            break
    print(j+1)
