#파이썬 연습_4주차_반복문_실습9(다트게임).py



Player=[0,0,0,0,0]

People = int(input('How many people (2~5) >> '))
for i in range(1):
    Round = print('Round',i+1)
    for e in range(People):
        Turn = print('Turn >> Player' ,e+1 )
        for i in range(3):
            a,b=input().split()
            a=int(a)
            b=str(b)
            if b == 'n':
                Player[e]+=a
            elif b == 'd':
                Player[e]+= 2*a
            elif b == 't':
                Player[e]+= 3*a
            print(Player[e])
'''             
if Player[0] == Player[i]:
    print('Draw')
elif Player[0] > Player[e]:
    Player[0] = Player [e]
    print('Player',Player.index(Player)+1,'Win!')
    print('Total Score =',Player[e])
'''
Max=Player[0]
Maxindex=0
for p in range(5):
    if Max < Player[p]:
        Max = Player[p]
        Maxindex = p
print(Player)
print('Player',Maxindex+1,'=',Max)
