#파이썬 연습_5주차_리스트_실습4.py

total=0 #total은 0
Avg=0 #Avg은 0
count=0 #count은 0
list1=[] #m은 빈 리스트
while True:
    num=int(input()) #num을 정수로 변환하여 입력받기
    if num > 0: #만약 num가 0보다 크면
        total+=num #num에 total 더하기
        count+=1 #count에 1더하기
        list1.append(num) #list1에 num값 추가하기
    elif num == 0: #num 가 0일때
        Avg=total/count #Avg는 total 나누기 count
        break #멈추기
      
print(list1)
print('Avg =','%.2f'%Avg)
