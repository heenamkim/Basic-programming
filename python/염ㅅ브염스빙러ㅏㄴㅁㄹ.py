

import random
card = [1,2,3,4,5,6,7,8,9,10,'J','Q','K']
random.shuffle(card)
people=['You','Player']
first=random.shuffle(people)
a=0
b=0
print(people[0],'First!')
people[0]=card[:3]
people[1]=card[3:6]
if people[0] == 'You':
    print('You card is1',people[0])
else:
    print('you card is2',people[1])
for i in range(3):
    you=input('Your turn >>')
    print('Player >>',player[i])
    if int(you) > int(player[i]):
        a+=1
        print("==score [",a,":",b,"]==")            
    else:
        b+=1
        print("==score [",a,":",b,"]==")
