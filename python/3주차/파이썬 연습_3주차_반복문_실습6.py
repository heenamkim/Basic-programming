# 파이썬 연습_3주차_반복문_실습6.py

count=0 #count가 0일때
total=0 #total가 0일때
while True: # 아래 문장이 진실이면 반복
    a=int(input()) #a를 정수로 변환하여 입력
    die=(1,2,3,4,5,6) #die 안에  1,2,3,4,5,6 들어있음
    total=total+a #total은 total 더하기 a
    count+=1 #count는 1씩 증가
    if a in die and total>50: # 만약 a가 die에 들어있고 totlal이 50보다 크면
        break # 멈추어라
    
print('Total=',total-a)
print('Count=',count-1)

       
       
