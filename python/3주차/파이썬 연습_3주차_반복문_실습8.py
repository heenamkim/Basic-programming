# 파이썬 연습_3주차_반복문_실습8.py

n=int(input()) #n을 정수로 변환하여 입력
total=1 #total은 1
for n in range(1,n+1): #n을 1~n+1까지 순서대로 입력받음
    total*=n #total 곱하기 n
print('Total = ',total) #출력하기
