#파이썬 연습_4주차_함수_실습14.py

n=int(input()) #n을 정수로 변환 하여 입력받기

def GetDivisor(n): #GetDivisor함수 사용
    count=0 #count는 0
    for i in range(1,n+1): #i를 1부터 n+1까지 반복
        if n % i == 0: #만약 n 나누기 i의 나머지가 0일때
            count+=1 #count에 1더하기
    return count #count 처음으로 돌아가기
print('Count = ', GetDivisor(n))
