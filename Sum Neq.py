# cook your dish here
t = int(input())
while t > 0:
    n = int(input())
    arr = list(map(int, input().split()))
    val = True
    j = arr[0]
    for i in range(n):
        if arr[i] != j:
            val = False
    if val:
        print("NO")
    else:
        if n == 4:
            if arr[0] + arr[1] == arr[2] + arr[3]:
                print("NO")
            else:
                print("YES")
        else:
            print("YES")
    t -= 1


    
        
            
    
    
