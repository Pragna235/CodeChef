# cook your dish here
for i in range(int(input())):
    n, k = map(int, input().split())
    l = list(map(int, input().split()))
    freq = [0] * k
    for i in l:
        freq[i%k] += 1
    ans = 1
    for i in range(k//2 + 1):
        if i == 0 or i == k/2:
            ans *= (1+freq[i])
        else:
            ans *= (2**freq[i] + 2**freq[k-i] - 1)
    mod = 10**9+7
    print(ans%mod)