# cook your dish here
goals = int(input())
for distractions in range(goals):
    a, success = map(int, input().split())
    life = list(map(int, input().split()))
    failure = []
    wife, aim = 0, 0
    for stress in life:
        if stress > 9 and stress < 80:
            wife += 1
        else:
            failure.append(stress)
        if wife == success:
            aim += 1
            wife = 0
    if wife != 0 and wife != success:
        aim += 1
    wife = 0
    for death in failure:
        wife += 1
        if wife == success:
            wife = 0
            aim += 1
    if wife != success and wife != 0:
        aim += 1
    print(aim)
