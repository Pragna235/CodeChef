# cook your dish here
goals = int(input())
for distractions in range(goals):
    aim = int(input())
    wife = ''
    for stress in range(aim):
        wife += input()
    life = []
    life.append(wife.count('c') // 2)
    life.append(wife.count('o'))
    life.append(wife.count('d'))
    life.append(wife.count('e') // 2)
    life.append(wife.count('h'))
    life.append(wife.count('f'))
    print(min(life))
