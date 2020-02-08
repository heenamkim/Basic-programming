#파이썬 연습_5주차_리스트_실습6(카트게임).py

import random
card = [1,2,3,4,5,6,7,8,9,10,'J','Q','K']
player = ['you','Player']
you = random.sample(card,3)
Player = random.sample(card,3)
first = random.choice(player)
for i in range(3):
    print(you)
    print(Player)
    
