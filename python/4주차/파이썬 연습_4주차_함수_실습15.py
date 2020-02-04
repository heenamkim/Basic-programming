#파이썬 연습_4주차_함수_실습15.py

n = list(str(input()))

def GetSum(n):
    total=0
    for i in list(n):
        total+=int(i)
    return total
print('Total = ',GetSum(n))
