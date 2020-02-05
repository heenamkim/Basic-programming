#파이썬 연습_4주차_반복문_실습7(다트 게임).py

Player1=0 # Player1은 0
Player2=0 # Player2 는 0


for i in range(5): #i를 5까지 차례대로 넣기
    Round=print('Round',i) 
    Turn=print('Turn >> Player1')
    for i in range(3): #i를 3까지 차례대로 넣기
        a=int(input()) #a를 정수로 변환하여 입력받음
        Player1+=a #받은 a를 Player1에 더하기
        print(Player1) 
    Turn=print('Turn >> Player2')
    for i in range(3): #i를 3까지 차례대로 넣기
        a=int(input()) #a를 정수로 변환하여 입력받음
        Player2+=a #받은 a를 Player2에 더하기
if Player1 > Player1: # 만약 Player1이 player2보다 크면
    print('Player1 Win!') #Payer1이 우승이라고 프린트
    print('Total Score =', Player1) #Player1 값 출력
elif Player1 < Player2: #만약 Player1이 Player2보다 작으면
    print('Player2 Win!')  #Payer1이 우승이라고 프린트
    print('Total Score =', Player2)  #Player2 값 출력
else: #둘다 아니라면
    print('Draw')# Draw로 출력
