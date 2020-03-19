#파이썬 연습_5주차_리스트_실습6(카드게임).py

import random
card = [1,2,3,4,5,6,7,8,9,10,'J','Q','K']
#dic_card = {'J':11,'Q':12,'K':13}
random.shuffle(card)
people=['You','Player']
you=[]
player=[]
a=0
b=0
first=random.choice(people)
if first == 'You':
    print('You First!')
    you=card[:3]
    player=card[3:6]
    print('You card is',you)
    print('Player card is',player)
    for i in range(3):
        you=input('Your turn >>')
        pla=print('Player >>',player[i])
        if int(you) > int(pla):
            a+=1
            print("==score [",a,":",b,"]==")
        else:
            b+=1
            print("==score [",a,":",b,"]==")
else:
    print('Player First!')
    player=card[:3]
    you=card[3:6]
    print('Player card is',player)
    print('You card is',you)
    for i in range(3):
        pla=print('Player >>',player[i])
        you=input('Your turn >>')
        if int(you) < int(pla):
            a+=1
            print("==score [",a,":",b,"]==")
        else:
            b+=1
            print("==score [",a,":",b,"]==")

