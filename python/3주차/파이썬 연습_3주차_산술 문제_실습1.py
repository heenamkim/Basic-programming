#파이썬 연습_3주차_산술 문제_실습1.py

a=int(input()) #a를 정수로 변환하여 입력
b=int(input()) #b를 정수로 변환하여 입력
if a>b: #만약 a가 b보다 크면
    print(a,'is bigger than ',b) #안에 문장을 출력
elif a==b: #a와 b가 같다면 
    print('same!') #안에 문장을 출력
else: # 위에 조건이 모두 아니라면
    print(a,'is smaller than',b) #안에 문장을 출력
