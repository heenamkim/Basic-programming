

import random
card=[1,2,3,4,5,6,7,8,9,10,'J','Q','K']
you=[]
player=[]
#first = random.choice(Player)
a=0
b=0
for i in random.sample(card,6):
    if int(i)<3:
        you.append(int(i))
    else:
        player.append(int(i))
print(you,player)
