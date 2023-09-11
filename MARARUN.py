# cook your dish here
for t in range(int(input())):
    D,d,a,b,c=map(int,input().split())
    maxi=D*d 
    if(maxi<10):
        print(0)
    elif(maxi<21):
        print(a)
    elif(maxi<42):
        print(b)
    else:
        print(c)