#파이썬 연습_4주차_반복문_실습9(다트게임).py



Player=['Player1','Player2','Player3','Player4','Player5']

Player[0]=0
Player[1]=0
Player[2]=0
Player[3]=0
Player[4]=0

People = int(input('How many people (2~5) >> '))
for i in range(5):
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
             
if Player[0] == Player[i]:
    print('Draw')
else:
    print('Player',int(Player.index(max(Player)))+1,'Win!')
    print('Total Score =',max(Player))
