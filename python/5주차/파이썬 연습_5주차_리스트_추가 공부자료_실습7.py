#파이썬 연습_5주차_추가 공부자료_실습7.py

num=input().split() #num를 list로 여러게 한번에 받기

Max = int(num[0]) #Max를 num[0]를 정수로 변환한 값이라 할대
for i in range(4):
    for i in num:
        if Max < int(i):
            Max = int(i)
num.append(Max)
    
print(num)

    
