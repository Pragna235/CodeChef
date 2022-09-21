r,o,c=input().split()
r,o,c=int(r),int(o),int(c)
remaining_overs=20-o
remaining_balls=remaining_overs*6
max_score=remaining_balls*6
chef_max_score=c+max_score

if(chef_max_score>r):
    print("YES")
else:
    print("NO")