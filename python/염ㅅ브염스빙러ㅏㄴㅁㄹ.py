

import random
card = [1,2,3,4,5,6,7,8,9,10,'J','Q','K']
people=['You','Player']
a=0
b=0
you=[]
player=[]
first=random.choice(people)
if first == 'You':
    print('You First!')
    for i in range(6):
        if i < 3:
            d=random.choice(card)    
            you.append(d)
            card.remove(d)
        else:
            d=random.choice(card)
            player.append(d)
            card.remove(d)
    print('You card is',you)
    print('Player card is',player)
    for i in range(3):
            y=input('Your turn >>')
            p=random.choice(player)
            player.remove(p)
            print('Player >>',p)
            if int(y) > int(p):
                a+=1
                print("==score [",a,":",b,"]==")            
            else:
                b+=1
                print("==score [",a,":",b,"]==")
else:
    print('Player First!')
    for i in range(6):
        if i < 3:
            d=random.choice(card)    
            player.append(d)
            card.remove(d)
        else:
            d=random.choice(card)
            you.append(d)
            card.remove(d)
    print('Player card is',player)
    print('You card is',you)
    for i in range(3):
            p=random.choice(player)
            player.remove(p)
            print('Player >>',p)
            y=input('Your turn >>')
            if int(y) < int(p):
                a+=1
                print("==score [",a,":",b,"]==")            
            else:
                b+=1
                print("==score [",a,":",b,"]==")

