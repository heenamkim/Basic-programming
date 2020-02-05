#파이썬 연습_4주차_반복문_실습11(다트 게임).py


Player=[0,0,0,0,0]

num = int(input('select Mode (301, 501)>> '))
People = int(input('How many people (2~5) >> '))
Player = [num,num,num,num,num]
for i in range(5):
    print('Round',i+1)
    print(Player[:People])
    for e in range(People):
        print('Turn >> Player' ,e+1 )
        for i in range(3):
            a,b=input().split()
            a=int(a)
            b=str(b)
            if b == 'n':
                if Player[e]- a >= 0:
                    Player[e]-=a
                else:
                    print('Try Again...')
            if b == 'd':
                if Player[e]- 2*a >= 0:
                    Player[e]-=2*a
                else:
                    print('Try Again...')
            elif b == 't':
                if Player[e]- 3*a >= 0:
                    Player[e]-=3*a
                else:
                    print('Try Again...')
    
Min=Player[0]
Minindex=0
for i in range(5):
    if Min > Player[i]:
        Min = Player[i]
        Minindex=i
print('Player',Minindex+1,'Win!')
print('Total Score =',Min)
    
