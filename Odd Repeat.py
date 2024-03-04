# cook your dish here
from math import inf, lcm, gcd;
p=print
from collections import defaultdict as maps
from collections import OrderedDict 
from collections import Counter as freq  
from collections import ChainMap 

def getlist():
    return list(map(int,input().split()))
    
def getinp():
    return map(int,input().split())
    
def main():
    for _ in range(int(input())):
        n,k,s=getinp()
        print((s-n**2)//(k-1))
        
if __name__=="__main__":
    main()
