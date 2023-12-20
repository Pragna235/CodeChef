# cook your dish here
for t in range(int(input())):
    u,v,a,s = map(int,input().split())
    
    exp_v = (u**2) - (2*a*s)
    
    if(exp_v > (v**2)):
        print('No')
    else:
        print("Yes")
    
    
