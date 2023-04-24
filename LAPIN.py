# cook your dish here
for t in range(int(input())):
    string=input()
    l=len(string)
    str1=string[:l//2]
    flag=0
    #print(str1)
    if(l%2!=0):
        str2=string[(l//2)+1:]
    else:
        str2=string[l//2:]
    #str2=string[l//2:]
    #print(str2)
    for i in str1:
        if(str1.count(i) != str2.count(i)):
            flag=1 
            break
    if(flag==0):
        print("YES")
    else:
        print("NO")
            
