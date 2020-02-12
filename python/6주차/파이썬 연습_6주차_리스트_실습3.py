#파이썬 연습_6주차_리스트_실습3.py

import random

num1=random.sample(range(0,100),5)
print(tuple(num1))

n=int(input())
for i in range(n):
    m=int(input())
    num1+=[m]
print(tuple(num1))
