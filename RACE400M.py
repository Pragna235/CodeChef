# cook your dish here
for t in range(int(input())):
    a,b,c=map(int,input().split())
    if(a<b and a<c):
        print("ALICE")
    elif(b<a and b<c):
        print('BOB')
    elif(c<a and c<b):
        print("CHARLIE")
