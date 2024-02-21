# cook your dish here
for t in range(int(input())):
    n = int(input())
    scores = list(map(int,input().split()))
    
    result = [1 for i in scores if i>4]
    
    if(len(result)==n):
        print("YES")
    else:
        print("NO")
