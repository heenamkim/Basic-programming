#파이썬 연습_2주차_반복문_실습3

a,b=input().split() #a,b를 한줄에 입력
a=int(a) #a를 정수로 변환
b=int(b) #b를 정수로 변환 
count_num=0 #count_num는 0
total=0 #total은 0
for num in range(a,b+2): # num가 a~b+2안에 들어있을때
    if num % 2==0: #만약 num가 짝수이면
        count_num+=1 #count_num는 1씩 증가
        total +=num #total에 num 를 더함
print("count=",count_num) #출력
print("total=",total) #출력
