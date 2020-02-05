#파이썬 연습_4주차_반복문_실습2.py

#1
n=int(input()) #n을 정수로 변환하여 입력
m=int(input()) #m을 정수로 변환하여 입력
total=0 #total은 0
for i in range(1,n+1): #i를 1부터 n+1까지 일때
    if m*i < n+1: #만약 m*i 가 n+i 보다 작으면
        total+=m*i # m*i를 total에 더한다
print('Total = ',total)

#2

n=int(input()) #n을 정수로 변환하여 입력
m=int(input()) #m을 정수로 변환하여 입력
total=0 #total은 0
for i in range(n+1): #i를 1부터 n+1까지 일때
    if i % m == 0: #i 나누기 m의 나머지가 0이면
        total+=i #i 를 total에 더한다
print('Total = ',total)
