# cook your dish here
for t in range(int(input())):
    n=int(input())
    if(n%7==6):
        print(n//7 + 1)
    else:
        print(n//7)