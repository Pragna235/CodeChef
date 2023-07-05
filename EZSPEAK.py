# cook your dish here
for t in range(int(input())):
    n=int(input())
    input_string = input()
    vowels=0
    consonants=0
    v='aeiou'
    test=''
    for i in input_string:
        if i not in v:
            test+=i 
            if(len(test)>=4):
                break
            #print("if ",test)
        else:
            test=''
            #print("else ",test)
    
    
    if((test in input_string) and len(test)>=4):
        print("NO")
    else:
        print("YES")
        
