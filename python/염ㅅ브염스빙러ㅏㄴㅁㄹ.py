

import random
card = [1,2,3,4,5,6,7,8,9,10,'J','Q','K']
people=['You','Player']
a=0
b=0
you=[]
player=[]
for i in range(3):
    if i < 3:
        d=random.choice(card)    
        you.append(d)
        card.remove(d)
        player.append(d)
        card.remove(d) ''' 
    else:
        d=random.choice(card)
        player.append(d)
        card.remove(d)
        '''
        
print(you)
print(player)
