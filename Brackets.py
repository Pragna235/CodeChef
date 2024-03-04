# cook your dish here
for i in range(int(input())):
    s=input()
    b=0
    max_b=0
    for j in s:
        if j=='(':
            b+=1
        if j==')':
            b-=1
        max_b=max(max_b,b)
    print('('*max_b+')'*max_b)
