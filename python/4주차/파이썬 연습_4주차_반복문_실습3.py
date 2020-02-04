#파이썬 연습_4주차_반복문_실습3.py

n=int(input())
Count=0
for i in range(1,n+1):
    if n % i == 0:
        Count+=1
print('Count = ', Count)
