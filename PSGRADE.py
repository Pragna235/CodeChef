# cook your dish here
for i in range(int(input())):
    am,bm,cm,tm,a,b,c=map(int,input().split())
    if(a>=am and b>=bm and c>=cm and (a+b+c)>=tm):
        print("YES")
    else:
        print("NO")
