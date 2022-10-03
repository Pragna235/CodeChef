# cook your dish here
for i in range(int(input())):
    a,b,x=input().split()
    a,b,x=int(a),int(b),int(x)
    b=b-a
    print(b//x)
