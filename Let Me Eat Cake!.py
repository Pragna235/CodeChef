for t in range(int(input())):
    a,b = map(int,input().split())
    c = 0
    while abs(a - b) > 0:
        if a > b:
            slices = (a + 1) // 2
            c += slices
            a -= slices
        else:
            slices = (b + 1) // 2
            c += slices
            b -= slices
    print(c)
