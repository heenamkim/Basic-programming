#파이썬 연습_5주차_리스트_실습1.py


def getMax(n): # getMax함수 사용
    Max=int(n[0]) #Max는 정수로 바꾼 n의 0번째 자리와 같다
    for i in n: #n에 있는 숫자만큼 반복한다.
        if Max < int(i): #만약 Max가 int(i)보다 작으면
            Max = int(i) #Max는 int(i)
    return Max #Max 처음으로 돌아가기
def getMin(n): #getMin함수 사용
    Min=int(n[0]) #Min는 정수로 바꾼 n의 0번째 자리와 같다
    for i in n: #n에 있는 숫자 만큼 반복 한다.
        if Min > int(i): #만약 Min가 int(i)보다 크면
            Min = int(i) #Min는 int(i)
    return Min #Min 처음으로 돌아가기

n=input().split() # 한번에 입력받기

print('max =',getMax(n))
print('min =',getMin(n))
