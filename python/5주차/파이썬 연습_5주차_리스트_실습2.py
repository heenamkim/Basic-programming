#파이썬 연습_5주차_리스트_실습2.py

n=input().split() #한번에 입력받기
def getSum(n): # getSum함수 사용
    total=0 #total은 0
    for i in n: #n에 숫자가 있는 동안
        total+=int(i) # i를 정수로 변환하여 total 에 더함
    return total # total 처음으로 돌아가기
print('Total = ',getSum(n))
    
