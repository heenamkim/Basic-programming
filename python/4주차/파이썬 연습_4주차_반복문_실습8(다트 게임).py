#파이썬 연습_4주차_반복문_실습8(다트 게임).py

Player1=0 # Player1은 0
Player2=0 # Player2 는 0

for i in range(5): #i를 5까지 차례대로 넣기
    Round = print('Round',i)
    Turn = print('Turn >> Player1')
    for i in range(3): #i를 3까지 차례대로 넣기
        a,b=input().split() #a,b를 한번에 입력받음
        a=int(a) #a는 정수로 변환
        b=str(b) #b는 문자로 변환
        if b == 'n': #만약 b가 n과 같으면
            Player1+=a # Player1에 a더하기
        elif b == 'd': #만약 b가 d와 같으면
            Player1+= 2*a #Player1에 2a를 더하기
        elif b == 't': #만약 b가 t와 같으면
            Player1+= 3*a #Player1에 3a를 더하기
    print('Turn >> Player2')
    for i in range(3): #i를 3까지 차례대로 넣기
        a,b=input().split() #a,b를 한번에 입력받음
        a=int(a) #a는 정수로 변환
        b=str(b) #b는 문자로 변환
        if b == 'n': #만약 b가 n과 같으면
            Player2+=a #Player2에 2a를 더하기
        elif b == 'd': #만약 b가 d와 같으면
            Player2+= 2*a #Player2에 2a를 더하기
        elif b == 't': #만약 b가 t와 같으면
            Player2+= 3*a #Player2에 3a를 더하기
if Player1 > Player1: # 만약 Player1이 player2보다 크면
    print('Player1 Win!') #Payer1이 우승이라고 프린트
    print('Total Score =', Player1) #Player1 값 출력
elif Player1 < Player2: #만약 Player1이 Player2보다 작으면
    print('Player2 Win!')  #Payer1이 우승이라고 프린트
    print('Total Score =', Player2)  #Player2 값 출력
else: #둘다 아니라면
    print('Draw')# Draw로 출력
    
