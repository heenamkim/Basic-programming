#파이썬 연습_5주차_추가 공부자료_실습7.py

num=input().split() #num를 list로 여러게 한번에 받기
list1=[]
for i in range(len(num)):
    for i in num :
        if i not in list1:
            Max = int(num[0])
            if Max < int(i):
                Max = int(i)
        list1.append(Max)

print(list1)

    
