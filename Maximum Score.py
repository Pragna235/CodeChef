# cook your dish here
for t in range(int(input())):
    n = int(input())
    a=input()
    
    zero = a.count('0')
    one = a.count('1')
    
    print(min(zero,one))
        
