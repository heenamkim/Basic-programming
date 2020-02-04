#파이썬 연습_4주차_반복문_실습1.py


odd=0
even=0
n=int(input())
for i in range(0,n+1):
    if i % 2 == 0:
        even+=i
    else:
        odd+=i
print('Total Odd = ',odd)
print('Total Even = ',even)
