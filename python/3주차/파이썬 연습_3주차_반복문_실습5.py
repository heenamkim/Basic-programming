#파이썬 연습_3주차_반복문_실습5.py

num=input().split() #한줄에 여러 개의 숫자를 num 입력받음
#num=list(map(int,num)) #리스트 값을 정수로 변환하여 입력
Max = int(num[0]) #num의 0번째를 Max
Min= int(num[0]) #num의 0번째를 Min

for i in num: #num안에 있는 i 가
    if Max< int(i): #Max보다 크다면
        Max = int(i) #max는 i
 
    if Min > int(i): #Min보다 i 가 작다면
        Min = int(i) #Min은 i
 
print("Max: ",Max) #출력
print("Min: ",Min) #출력
