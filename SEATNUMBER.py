# cook your dish here
for t in range(int(input())):
    n=int(input())
    if(n<11):
        print("Lower Double")
    elif(n<16):
        print("Lower Single")
    elif(n<26):
        print("Upper Double")
    else:
        print("Upper Single")
