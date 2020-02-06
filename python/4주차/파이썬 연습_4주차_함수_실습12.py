#파이썬 연습_4주차_함수_실습12.py


n=int(input()) #n을 정수로 전환하여 입력

def sum(i): #sum 함수 사용
    total =0 #total은 0
    for i in range(1, i+1): #i를 1부터 i+1까지 반복
        total+= i #i를 total에 더함
    return total #total 첨으로 되돌리기
print('Total = ',sum(n))
