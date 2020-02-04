


Player=[0,0,0,0,0]

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
Player[0]=Player1
Player[1]=Player2
Player[2]=Player3
Player[3]=Player4
Player[4]=Player5
             
if Player[0] == Player[i]:
    print('Draw')
elif Player[0] < Player[i]:
    print('Player',i,' Win!')
    print('Total Score = ',e)
