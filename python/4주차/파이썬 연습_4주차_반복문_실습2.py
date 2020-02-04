#파이썬 연습_4주차_반복문_실습2.py

#1
total=0
n=int(input())
m=int(input())
for i in range(1,n+1):
    if m*i < n+1:
        total+=m*i
print('Total = ',total)

#2

n=int(input())
m=int(input())
total=0
for i in range(n+1):
    if i % m == 0:
        total+=i
print('Total = ',total)
