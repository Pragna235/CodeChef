for _ in range(int(input())):
    n=int(input())
    om = list(map(int,input().split()))
    ad = list(map(int,input().split()))
    com=0
    cad=0
    # cmom=-1
    # cmad=-1
    com1=com
    cad1=cad
    for i in range(n):
        
        if om[i]!=0:
            com+=1
        else :
            com=0
        
        if ad[i]!=0:
            cad+=1
        else :
            cad=0
        com1 = max(com,com1)
        cad1 = max(cad,cad1)
    # print(cad1,com1)
    if (com1>cad1):
        print("Om")
    elif (com1<cad1):
        print("Addy")
    else:
        print("Draw")
        