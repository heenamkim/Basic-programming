#파이썬 연습_6주차_딕셔너리_실습5.py

num1,num2=input().split() #두개 값 한번에 입력 받기
num1=int(num1) # num1 정수로 변환
num2=int(num2) # num2 정수로 변환
square={} # square은 빈 딕셔너리
for i in range(num1,num2+1): # num1부터num2+1까지 숫자가 차례대로 들어갈때
    square[i]=i*i # 키 square[i]번째는 밸류 i*i
print(square)
