#파이썬 연습_5주차_리스트_실습6(카드게임).py

import random
card = [1,2,3,4,5,6,7,8,9,10,'J','Q','K']
dic_card = {'J':11,'Q':12,'K':13}
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
else:
    print('Player First!')
    player=card[:3]
    you=card[3:6]
    
print('You card is',you)
print('Player card is',player)

for i in range(3):
    if first == 'You':
        you=input('Your turn >>')
        p=random.choice(player)
        player.remove(p)
        print('Player >>',p)
    else:
        p=random.choice(player)
        player.remove(p)
        print('Player >>',p)
        you=input('Your turn >>')
        
    if you in dic_card:
        you = dic_card[you]
    else:
        you = int(you)

    if p in dic_card:
        p = dic_card[p]
    else:
        p = int(p)

    if you > p:
        a+=1
        print("==score [",a,":",b,"]==")
        if a==2:
            print("You Win!")
            break
    else:
        b+=1
        print("==score [",a,":",b,"]==")
        if b==2:
            print("You Lose~")
            break

