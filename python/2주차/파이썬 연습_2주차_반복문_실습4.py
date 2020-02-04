# 파이썬 연습_2주차_반복문_실습4
'''
#입력 받아서 구하는 방법
total=0
while True:
    a = int(input())
    die=(1,2,3,4,5,6)
    if a in die and a == 3:
        break
    elif a in die and a == 6:
        break
    else:
        total+=a
print(total)
'''

#모듈을 이용한 방법

import random    

i = 0
total=0
while i != 6 and i !=3:
    i = random.randint(1, 6)
    total+=i    
    print(i)
print(total-i)

