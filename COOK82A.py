# cook your dish here
for t in range(int(input())):
   
    d = dict(input().split() for i in range(4))
    if(d['Barcelona']>d['Eibar'] and d['RealMadrid']<d['Malaga']):
        print("Barcelona")
    else:
        print("RealMadrid")
    
    
    