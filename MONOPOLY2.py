# cook your dish here
for t in range(int(input())):
    p,q,r,s=map(int,input().split())
    if((p>q+r+s) or (q>p+r+s) or (r>p+q+s) or (s>p+q+r)):
        print("YES")
    else:
        print("No")
