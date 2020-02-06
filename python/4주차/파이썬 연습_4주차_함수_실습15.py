#파이썬 연습_4주차_함수_실습15.py

n = list(str(input())) #n리스트로 묶고 문자로 변환 후 입력받기

def GetSum(n): #GetSum함수 사용
    total=0 #total이 0
    for i in list(n): #i가 list(n)안에 있으면
        total+=int(i) #i를 정수로 변환 후 total에 더함
    return total #total 처음으로 돌리기
print('Total = ',GetSum(n))
