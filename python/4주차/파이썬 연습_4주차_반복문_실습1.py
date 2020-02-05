#파이썬 연습_4주차_반복문_실습1.py


odd=0 #odd 는 0
even=0 # even 는 0
n=int(input()) #n 를 정수로 변환하여 입력
for i in range(0,n+1): # i 가 0 부터 n+1일때
    if i % 2 == 0: #만약 i 나누기 2가 0 과 같으면
        even+=i # even에 1을 더한다
    else: # 0과 다르다면
        odd+=i #odd에 1을 더한다
print('Total Odd = ',odd)
print('Total Even = ',even)
