

Player1=0
Player2=0


People = int(input('How many people (2~5) >> '))
for i in range(1,6):
    Round = print('Round',i)
    for i in range(2,6):
        if People == 2:
            Turn = print('Turn >> Player')
    for i in range(1,4):
        a,b=input().split()
        a=int(a)
        b=str(b)
        if b == 'n':
            Player1+=a
        elif b == 'd':
            Player1+= 2*a
        elif b == 't':
            Player1+= 3*a
    print('Turn >> Player2')
    for i in range(1,4):
        a,b=input().split()
        a=int(a)
        b=str(b)
        if b == 'n':
            Player2+=a
        elif b == 'd':
            Player2+= 2*a
        elif b == 't':
            Player2+= 3*a
if Player1 > Player2:
    print('Player1 Win!')
    print('Total Score = ',Player1)
elif Player1 < Player2:
    print('Player2 Win!')
    print('Total Score = ',Player2)
elif Player1 == Player2:
    print('Draw')
    
