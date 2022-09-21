# We have populated the solutions for the 10 easiest problems for your support.
# Click on the SUBMIT button to make a submission to this problem.

try:
    t = int(input())
    while(t>0):
        b = 0
        n = int(input())
        while(n>0):
            a=n%10
            if a==4:
                b = b+1
            n=n//10
        print(b)
        t = t-1
        
except EOFError:
    pass

