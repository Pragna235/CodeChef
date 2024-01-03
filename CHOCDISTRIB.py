# cook your dish here
for t in range(int(input())):
    n = int(input())
    max = n
    
    if(n%2==0):
        min = n//2 
    else:
        min = n//2 + 1 
    print(min,max)