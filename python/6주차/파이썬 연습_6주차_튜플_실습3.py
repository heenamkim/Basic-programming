#파이썬 연습_6주차_튜플_실습3.py

import random #랜덤 모튤 부르기

num1=random.sample(range(0,100),5) #num1은 숫자 1~100에서 랜덤으로 5개를 뽑은 값
print(tuple(num1))

n=int(input()) #n은 정수로 변환하여 입력받기
for i in range(n): #n안에 숫자가 있는동안
    m=int(input()) #m을 정수로 변환하여 입력받기
    num1+=[m] #num1에 [m]값 더하기
print(tuple(num1))
