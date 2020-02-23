#파이썬 연습_6주차_리스트_실습1.py

judge=int(input()) #judge를 정수로 변환하여 입력받기
num=input().split() #num를 한줄로 입력받기
max_num=int(num[0]) #max_num는 num[0]의 정수
min_num=int(num[0]) #min_num는 num[0]의 정수
total_list=[] #total_list는 빈 리스트
total=0 #total은 0
avg=0 #avg는 0

for i in num: #num에 숫자가 있는동안
    if max_num < int(i): #만약 int(i)가 max_num보다 크면
        max_num = int(i) #max_num 는 int(i)
    elif min_num > int(i): #int(i)가 min_num보다 작으면
        min_num = int(i) #min_num는 int(i)
    total+=int(i) #total에 int(i)더하기
    total_list.append(int(i)) #total_list에 int(i) 더하기
avg=(total-max_num-min_num)/(judge-2) #max_num와 min_num를 뺀 나머지 합의 평균

print(total_list)
print('Max:',max_num,',','min:',min_num)
print('Avg =',"%.2f"%avg)
