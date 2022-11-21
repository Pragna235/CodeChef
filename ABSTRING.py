# cook your dish here
t=int(input())
for i in range(t):
    n=int(input())
    s=input()
    if(n%2==0):
        l=list(s)
        k=set(l)
        for ele in k:
            if(l.count(ele)%2!=0):
                print("NO")
                break
        else:
            print("YES")
    else:
        print("NO")
          