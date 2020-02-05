#파이썬 연습_4주차_반복문_실습11(다트 게임).py


Player=[0,0,0,0,0] #0인 Player이 5명이 있을때

num = int(input('select Mode (301, 501)>> ')) # Mode 입력 받음
People = int(input('How many people (2~5) >> ')) #2~5명중 입력받음
Player = [num,num,num,num,num]
for i in range(5): # i를 5까지 차례대로 넣음
    print('Round',i+1)
    print(Player[:People])
    for e in range(People): # e가 People 수많은 넣을때
        print('Turn >> Player' ,e+1 )
        for i in range(3): #i를 3까지 차례대로 넣을때
            a,b=input().split() #a,b를 한번에 입력받음
            a=int(a) #a를 정수로 변환
            b=str(b) #b를 문자로 변환
            if b == 'n': #b가 n과 같은때
                if Player[e]- a >= 0: #만약 Player[e]-a가 0보다 크면
                    Player[e]-=a #Player[e]값에서 a를 뺀다
                else: #그게 아니라면
                    print('Try Again...') 
            if b == 'd':  #b가 d와 같은때
                if Player[e]- 2*a >= 0: #만약 Player[e]-2a가 0보다 크면
                    Player[e]-=2*a #Player[e]값에서 2a를 뺀다
                else: #그게 아니라면
                    print('Try Again...')
            elif b == 't':  #b가 t와 같은때
                if Player[e]- 3*a >= 0: #만약 Player[e]-3a가 0보다 크면
                    Player[e]-=3*a #Player[e]값에서 3a를 뺀다
                else: #그게 아니라면
                    print('Try Again...')
    
Min=Player[0] #Mind은 Player[0]
Minindex=0 #Minindex는 0
for i in range(5): #i를 5까지 차례대로 넣음
    if Min > Player[i]: #만약 Min가 Player[i]보다 작으면
        Min =  Player[i] #Min은 Player[i]
        Minindex = i #Minindex는 i
print('Player',Minindex+1,'Win!')
print('Total Score =',Min)
    
