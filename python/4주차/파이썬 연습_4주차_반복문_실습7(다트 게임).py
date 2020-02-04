#파이썬 연습_4주차_반복문_실습7(다트 게임).py

Player1=0
Player2=0


for i in range(1,6):
    Round=print('Round',i)
    Turn=print('Turn >> Player1')
    for i in range(1,4):
        a=int(input())
        Player1+=a
        print(Player1)
    Turn=print('Turn >> Player2')
    for i in range(1,4):
        a=int(input())
        Player2+=a
if Player1 > Player1:
    print('Player1 Win!')
    print('Total Score =', Player1)
elif Player1 < Player2:
    print('Player2 Win!')
    print('Total Score =', Player2)
else:
    print('Draw')
