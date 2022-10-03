# cook your dish here
for i in range(int(input())):
    a,b=input().split()
    a,b=int(a),int(b)
    if((b-a)%3==0 or (b-a)%3==1):
        print("YES")
    else:
        print("NO")
