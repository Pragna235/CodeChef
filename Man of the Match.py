# cook your dish here
for t in range(int(input())):
    scores=[]
    for i in range(22):
        a,b = map(int,input().split())
        score = a + (b*20)
        scores.append(score)
    man = scores.index(max(scores))
    print(man+1)
        
