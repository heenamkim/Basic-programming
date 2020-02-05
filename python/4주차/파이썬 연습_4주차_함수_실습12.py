#파이썬 연습_4주차_함수_실습12.py


n=int(input()) #n을 정수로 전환하여 입력

def sum(i): 
    total =0
    for i in range(1, i+1):
        total+= i
    return total
print('Total = ',sum(n))
