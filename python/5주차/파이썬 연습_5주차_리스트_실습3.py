#파이썬 연습_5주차_리스트_실습3.py

n=int(input()) #n을 정수로 변환하여 입력받기
total=0 #total은 0
avg=0 #Avg는 0
num=[] #num는 빈 리스트
for i in range(n): #i가 0부터 n-1까지 반복
    m=input() #m 입력받기
    total+=int(m) #m을 정수로 변환하여 total에 더하기
    num.append(int(m)) #num에 정수로 변환한 m값 추가하기
avg=total/n #Avg는 total을 n많큼 나누기
print(num) 
print('Avg =','%.2f'%avg)
