# cook your dish here
for _ in range(int(input())):
    d, c = map(int, input().split())
    a_list = list(map(int, input().split()))
    b_list = list(map(int, input().split()))
    e = 0
    if sum(a_list) >= 150:
        e += d
    if sum(b_list) >= 150:
        e += d
    print('YES' if e > c else 'NO')
