#파이썬 연습_6주차_딕셔너리_실습7.py

result={}
total=[]
python=0
c=0
bk=0
python_avg=0
c_avg=0
bk_avg=0
list_avg=[]
while True:
    name=input() # name을 입력 받으면
    if name == 'None': # 만약 name이 None을 입력 받으면
        break # 멈추기
    else: # 아닐경우
        sub=input().split() # sub을 여러개 입력받기
        list1=[] 
        for i in sub: # sub에 숫자가 있는 동안에
            list1.append(int(i)) # list1에 정수로 변환한 i 추가하기
            result[name]=list1 # 키 name은 딕셔너리 list1
            total.append(int(i)) # total에 정수로 변환한 i 추가하기
            
for i in range(len(total)): # total 길이의 수가 있는동안
    if i%3==0: # 만약 i 나누기 3의 나머지가 0일때
        python+=total[i] # python에 total i번째 값 더하기
        python_avg=python/len(result) # python_avg는 python나누기 result의 길이
    elif i%3==1: # 만약 i 나누기 3의 나머지가 1일때
        c+=total[i] # c에 total i번째 값 더하기
        c_avg=c/len(result) # c_avg는 c나누기 result의 길이
    else: # 둘다 아니라면
        bk+=total[i] # bk에 total i번째 값 더하기
        bk_avg=bk/len(result) #bk_avg는 bk나누기 result의 길이
list_avg.append(python_avg) # python_avg값 list_avg값에 추가하기
list_avg.append(c_avg) #c_avg값 list_avg값에 추가하기
list_avg.append(bk_avg) #bk_avg값 list_avg값에 추가하기

print(result)     
print(list_avg)    


