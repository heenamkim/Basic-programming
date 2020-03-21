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

if first == 'You': # 만약 first가 you 면
    print('You First!') 
    you=card[:3] # you는 card 리스트의 0~2값
    player=card[3:6] #player은 card 리스트의 3~5값 
else: # 아니면
    print('Player First!')
    player=card[:3] # player은 card 리스트의 0~2값
    you=card[3:6] #you는 card 리스트의 3~5값 
    
print('You card is',you)
print('Player card is',player)

for i in range(3): # 만약 i가 0~2까지 있을때
    if first == 'You': # 만약 first가 you 면
        you=input('Your turn >>')
        p=random.choice(player) # player에서 랜덤으로 값 하나 받기
        player.remove(p) # 하나 받은 값 지우기
        print('Player >>',p)
    else: # 아니면
        p=random.choice(player) #player에서 랜덥으로 값 하나 받기
        player.remove(p) # 하나 받은 값 지우기
        print('Player >>',p)
        you=input('Your turn >>')
        
    if you in dic_card: # 만약 dic_card안에 you 값이 있으면
        you = dic_card[you] # you는 dic_card의 벨류 값이랑 같음
    else: # 아니면
        you = int(you) # you는 정수로 변환

    if p in dic_card: # 만약 dic_card안에 p 값이 있으면
        p = dic_card[p] # p는 dic_card의 벨류 값이랑 같음
    else:
        p = int(p) # p는 정수로 변환

    if you > p: # 만약 you가 p보다 크면
        a+=1 # a값에 1더하기
        print("==score [",a,":",b,"]==")
        if a==2: # 만약 a값이 2가 되면
            print("You Win!")
            break # 멈추기
    else: # 아니면
        b+=1 # b의 값에 1더하기
        print("==score [",a,":",b,"]==")
        if b==2: # b의 값이 2가 되면
            print("You Lose~")
            break # 멈추기

