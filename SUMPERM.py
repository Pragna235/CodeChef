# cook your dish here
for i in range(int(input())):
    n=int(input())
    arr=[i for i in range(1,n+1)]
    #print(arr)
    if(n%2!=0):
        print(-1)
    else:
        for i in range(1,n):
            if(i%2!=0):
                #print("i = ",i)
                print(arr[i],end = " ")
            else:
                print(arr[i-2],end= " ")
        print(arr[i-1])
        
        
        