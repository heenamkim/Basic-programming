#파이썬 연습_5주차_리스트_실습7.py

num=list(input().split())

num+=num[0]
del num[0]
print(int(num))
