# cook your dish here
for t in range(int((input()))):
    s,a,b,c = map(int,input().split())
    s*=(1+c/100)
    if s>=a and s<=b:
        print("Yes")
    else:
        print("No")
