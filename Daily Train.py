# cook your dish here
def nCr(n, r):
    result = fact(n) //(fact(r) * fact(n - r))
    return result

def fact(a):
    if a == 1 or a == 0:
        return 1
    else:
        return a * fact(a - 1)

def main():
    x, n = map(int, input().split())
    count = 0
    while n > 0:
        n -= 1
        seats = input()
        while seats:
            comp = seats[:4] + seats[-2:]
            c = comp.count('0')
            if (c>=x): 
                if(c == x): count += 1
                else : count += nCr(c, x)
            seats=seats[4:-2]
    print(count)

if __name__ == "__main__":
    main()
