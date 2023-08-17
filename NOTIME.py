# cook your dish here
n,h,x=map(int,input().split())
arr=list(map(int,input().split()))

if(x+max(arr)>=h):
    print("YES")
else:
    print("NO")