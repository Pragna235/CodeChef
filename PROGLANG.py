# cook your dish here
for t in range(int(input())):
    fts=list(map(int,input().split()))
    a=[fts[0],fts[1]]
    a1=[fts[2],fts[3]]
    a2=[fts[4],fts[5]]
    if(set(a)==set(a1)):
        print(1)
    elif(set(a)==set(a2)):
        print(2)
    else:
        print(0)
