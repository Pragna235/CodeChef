# cook your dish here
for t in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    frames=1
    for i in range(0,n-1):
        if(arr[i]!=arr[i+1]):
            frames+=1 
    print(frames)
       
         

    
        