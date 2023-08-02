# cook your dish here
for t in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    runs=0
    count=0
    for i in range(n):
        runs+=arr[i]
        #print("runs = ",runs)
        strike=(runs/(i+1))*100 
        #print("strike = ",strike)
        if(strike==100):
            count+=1
            #print("i = ",i,"count = ",count)
        
        
    print(count)
        