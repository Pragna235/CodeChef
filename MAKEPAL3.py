# cook your dish here
for _ in range(int(input())):
    length = int(input())
    arr = list(map(int, input().split()))
    
    cur = ans = 0
    for i in range(length):
        prevdiff = max(0, arr[length - 1 - i] - arr[i])
        #print(prevdiff)
        
        ans += max(0, prevdiff - cur)
        #print(ans)
        cur = prevdiff
        #print(cur)
        
    print(ans)