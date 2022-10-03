# cook your dish here
for i in range(int(input())):
    a,b=input().split()
    a,b=int(a),int(b)
    if((a+b )%2 == 0):
        print("BOb")
    else:
        print("Alice")
