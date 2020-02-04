#파이썬 연습_3주차_산술문제_실습2

import random #랜덤 모듈 부르기

a=int(input()) # a를 정수로 변환
n = random.randint(1, 100) # n을 1~100중 랜덤 재생
if a>n: # 만약 a가 n보다 크면
    print(a,'is bigger than',n) # 안에 문장을 출력
elif a==n: # 만약 a가 n과 같다면
    print('same!') # 안에 문장을 출력
else: #위에 조건이 모두 아니라면
    print(a,'is smaller than',n) # 안에 문장을 출력
