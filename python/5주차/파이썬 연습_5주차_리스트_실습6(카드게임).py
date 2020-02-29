#파이썬 연습_5주차_리스트_실습6(카드게임).py

import random
card = [1,2,3,4,5,6,7,8,9,10,'J','Q','K']
Player = ['you','player']
first = random.choice(Player)
a=0
b=0
print(first,'First!')
for i in card:
    print('Your card is',you)
    print('player card is',player)
    for i in range(3):
        if first == 'you':
            int(input('your turn >>'))
            print('player >>',random.choice(player))
            if 'y' > 'p':
                a+=1
                print('== score [',a,':',b,'] ==')
            elif 'y' < 'p':
                b+=1
                print('== score [',a,':',b,'] ==')
        elif first == 'player':
            print('player >>',random.choice(player))
            int(input('your turn >>'))
            if 'y' > 'p':
                a+=1
                print('== score [',a,':',b,'] ==')
            elif 'y' < 'p':
                b+=1
                print('== score [',a,':',b,'] ==')
