#파이썬 연습_5주차_추가 공부자료_실습7.py

num=input().split() #num를 list로 여러게 한번에 받기

for i in range(len(num)): # i 가 num의 길이만큼 들어있을때
    Max=num[int(i)] # max는 num(i)를 정수로 변환한 값
    for j in range(len(num)): # j가 num의 길이만큼 들어있을때
        if Max>num[int(j)]: # 만약 max가 num[j]를 정수로 변환한 값 보다 작으면
            Max=num[int(j)] # max는 num[j]를 정수로 변환한 값
            num[int(j)]=num[int(i)] # num[j]는 num[i] 
            num[int(i)]=Max # num[i]는 max
    
print(num)
