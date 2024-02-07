
# cook your dish here
T = int(input())
for i in range(T):
    N, K = map(int, input().split(' '))
    A = list(map(int, input().split(' ')))
    r = 0
    d = 0
    for i in range(len(A)):
        if A[i]+r < K:
            print('NO', i+1)
            break
        else:
            r = (A[i]+r) - K
            d += 1
    if d == len(A):
        print('YES')
    
