#파이썬 연습_5주차_리스트_실습6(카드게임).py

import random
card = [1,2,3,4,5,6,7,8,9,10,'J','Q','K']
random.shuffle(card)
people=[you,player]
for i in range(2):
    first= random.choice(people)
    if first == 'you':
        print(card[:3])
    else:
        print(card[3:6])
