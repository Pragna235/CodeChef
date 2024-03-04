# cook your dish here
for _ in range(int(input())):
    n=int(input())
    l=list(map(int, input().split()))
    l.sort()
    count=0
    if(min(l)!=0 or max(l)>n):
        print("0")
    else:
        for i in l:
            if(i<=count):
                count +=1 
        print(count)        
