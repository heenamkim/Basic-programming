#파이썬 연습_4주차_반복문_실습10(다트게임).py

num = int(input('select Mode (301, 501)>> '))

Player = [num,num]
for i in range(1,6):
    print('Round',i)
    print(Player)
    for e in range(2):
        print('Turn >> Player',e+1)
        for i in range(1,4):
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
for i in range(2):
    if Min > Player[i]:
        Min =  Player[i]
        Minindex = i
print('Plyer',Minindex+1,'Win!')
print('Total Score =',Min)
    
