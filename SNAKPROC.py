# cook your dish here
for t in range(int(input())):
    n=int(input())
    s=input()
    l=[]
    for i in s:
        if(i=='H'or i=='T'):
            l.append(i)
    l=''.join(l)
    #print("l = ",l)
    h=l.count('H')
    t=l.count('T')
    hh=l.count('HH')
    ht=l.count('HT')
    #print(hh)
    if(h!=t or hh>0 or ht<len(l)//2 ):
        print('Invalid')
    else:
        print('Valid')