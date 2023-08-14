# cook your dish here
for t in range(int(input())):
    n=int(input())
    dolls=[]
    for i in range(n):
        dolls.append(int(input()))
    
    for j in dolls:
        if dolls.count(j)%2==1:
            print(j)
            break
        
    
