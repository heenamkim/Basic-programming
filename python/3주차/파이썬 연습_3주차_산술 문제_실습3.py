#파이썬 연습_3주차_산술문제_실습3

import random #랜덤 모튤 불러오기

n = random.randint(1, 100) #n을 1~100까지 랜덤 재생
while True: #아래의 조건이 진실이면 반복
    a=int(input()) #a를 정수로 변환하여 입력
    if a<n: #만약 a가 n보다 작으면
        print('High!') #안에 문장을 출력
    elif a==n: #만약 a와 n이 같다면
        print("That's Right!") #안에 문장을 출력
        break #멈추어라
    else: #위의 조건이 모두 아니면
        print('Low..') #안에 문장을 출력
