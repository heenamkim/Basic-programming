#파이썬 연습_4주차_반복문_실습3.py

n=int(input()) #n을 정수로 변환하여 입력
Count=0 #count 는 0
for i in range(1,n+1): #i 가 1부터 n+1을 차례대로 입력받았을때
    if n % i == 0: # n 나누기 i 의 나머지가 0 이면
        Count+=1 #count에 1을 더한다
print('Count = ', Count)
