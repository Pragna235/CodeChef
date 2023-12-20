# cook your dish here
for t in range(int(input())):
    n = int(input())
    #l = [i for i in range(1,n+1)]
    
    total =( n*(n+1) ) //2 
    if(total%2==0):
        print(n)
    else:
        print(n-1)
