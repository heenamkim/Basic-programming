#파이썬 연습_3주차_계산기_실습3,py

a=int(input()) #a를 정수로 변환하여 입력
c = 1 #c가 1
while True: #아래 조건이 진실이면 반복
    op=input() #op를 입력
    if c != 1 : #만약 c가 1이 아닐때
        print(a) #a를 프린트
    else: #맞을경우
        c+=1 #c를 1씩 증가
    if op== '=': #만약 op가 =일떄
        break # 멈추어라
    b=int(input()) #b를 정수로 변환하여 입력
    if op == '+': #만약 op 가 +이면
        a=(a+b) #a는 a+b
    elif op == '-': #만약 op가 -이면
        a=(a-b) #a는 a-b
    elif op == '*': #만약 op가 *이면
        a=(a*b) #a는 a*b
    elif op == '/': #만약 op가 /이면
        a=(a/b) #는 a/b
