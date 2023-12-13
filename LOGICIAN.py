# cook your dish here
for t in range(int(input())):
    n = int(input())
    s = input()
    flag=0
    
    for i in range(len(s)):
        if(s[i]=='0'):
            print("NO")
        else:
            if('0' in s[i+1]):
                print("NO")
            else:
                print("IDK")
                
                
                    
            
                
                