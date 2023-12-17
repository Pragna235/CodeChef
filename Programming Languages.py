# cook your dish here
for t in range(int(input())):
    a,b,a1,b1,a2,b2 = map(int,input().split())
    
    if(set([a,b]) == set([a1,b1])):
        print(1)
    elif(set([a,b]) == set([a2,b2])):
        print(2)
    else:
        print(0)
