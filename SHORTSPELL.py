# cook your dish here
def function(n,s):
    mini=-1 
    for i in range(n-1):
        if s[i]>s[i+1]:
            mini=i 
            break
    if mini==-1:
        return s[:-1]
    else:
        return s[:mini] + s[mini+1:]
        
for t in range(int(input())):
    n=int(input())
    s=input()
    print(function(n,s))
    