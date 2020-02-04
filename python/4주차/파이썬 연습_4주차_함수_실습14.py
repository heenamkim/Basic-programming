#파이썬 연습_4주차_함수_실습14.py

n=int(input())

def GetDivisor(n):
    count=0
    for i in range(1,n+1):
        if n % i == 0:
            count+=1
    return count
print('Count = ', GetDivisor(n))
