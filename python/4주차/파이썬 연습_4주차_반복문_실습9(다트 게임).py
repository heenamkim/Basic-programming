#파이썬 연습_4주차_반복문_실습9(다트게임).py



Player=[0,0,0,0,0] #0인 Player이 5명이 있을때

People = int(input('How many people (2~5) >> ')) #2~5명중 입력받음
for i in range(5): # i를 5까지 차례대로 넣음
    Round = print('Round',i+1)
    for e in range(People): # e가 People 수많은 넣을때
        Turn = print('Turn >> Player' ,e+1 )
        for i in range(3): #i를 3까지 차례대로 넣을때
            a,b=input().split() #a,b를 한번에 입력받음
            a=int(a) #a를 정수로 변환
            b=str(b) #b를 문자로 변환
            if b == 'n': #b가 n과 같은때
                Player[e]+=a #Player[e]에 a더하기
            elif b == 'd': #b가 d와 같은때
                Player[e]+= 2*a #Player[e]에 2a더하기
            elif b == 't': #b가 t와 같은때
                Player[e]+= 3*a #Player[e]에 3a더하기
             
Max=Player[0] #Max는 Player[0]
Maxindex=0 #Maxindex는 0
for i in range(5): #i를 5까지 차례대로 넣음
    if Max < Player[i]: #만약 Max가 Player[i]보다 작으면
        Max = Player[i] #Max는 Player[i]
        Maxindex=i #Maxindex는 i
print('Player',Maxindex+1,'Win!')
print('Total Score =',Max)
