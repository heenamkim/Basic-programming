


num = int(input('select Mode (301, 501)>> '))
if num == 301 or 501:
    Player1 = num
    Player2 = num
    while True:
        for i in range(1,6):
            Round = print('Round',i)
            Score = print([Player1,Player2])
            Turn = print('Turn >> Player1')
            if Player1 > 0:
                for i in range(1,4):
                    a,b=input().split()
                    a=int(a)
                    b=str(b)
                    if b == 'n':
                        Player1-=a
                    elif b == 'd':
                        Player1-= 2*a
                    elif b == 't':
                        Player1-= 3*a
            elif Player1 < 0:
                    print('Try Again...')
                    continue
            print('Turn >> Player2')
            if Player2 > 0:
                for i in range(1,4):
                    a,b=input().split()
                    a=int(a)
                    b=str(b)
                    if b == 'n':
                        Player2-=a
                    elif b == 'd':
                        Player2-= 2*a
                    elif b == 't':
                        Player2-= 3*a
            elif Player2 < 0:
                print('Try Again...')
                continue
if Player1 > Player2:
    print('Player1 Win!')
    print('Total Score = ',Player1)
elif Player1 < Player2:
    print('Player2 Win!')
    print('Total Score = ',Player2)
elif Player1 == Player2:
    print('Draw')
    
