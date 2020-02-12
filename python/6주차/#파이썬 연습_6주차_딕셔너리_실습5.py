#파이썬 연습_6주차_딕셔너리_실습5.py

num1,num2=input().split()
num1=int(num1)
num2=int(num2)
square={}
for i in range(num1,num2+1):
    square[i]=i*i
print(square)
