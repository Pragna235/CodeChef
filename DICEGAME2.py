# cook your dish here
for t in range(int(input())):
    a1,a2,a3,b1,b2,b3 = map(int,input().split())
    list1 = [a1,a2,a3]
    list2 = [b1,b2,b3]
    
    list1.remove(min(list1))
    list2.remove(min(list2))
    #print(list1)
    #print(list2)
    
    if(sum(list1)>sum(list2)):
        print("Alice")
    elif(sum(list1)<sum(list2)):
        print("Bob")
    else:
        print("Tie")
