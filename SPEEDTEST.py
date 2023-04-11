# cook your dish here
for t in range(int(input())):
    a,x,b,y=map(int,input().split())
    a=a/x 
    b=b/y          
    if(a<b):
        print("Bob")
    elif(a==b):
        print("Equal")
    else:
        print("Alice")