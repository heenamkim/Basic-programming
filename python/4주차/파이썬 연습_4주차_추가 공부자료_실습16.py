#파이썬 연습_4주차_추가 공부자료_실습16.py

num=input().split() #num를 여러게 한번에 받기

num+=num[0] #num[0]를 num에 더하기
del num[0] #num[0]삭제
print(int(num))
