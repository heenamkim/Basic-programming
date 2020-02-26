#파이썬 연습_6주차_튜플_실습4.py

s_num=int(input()) #s_num를 정수로 변환하여 입력받기
total=[] #total은 빈 리스트

def camltbeAdded(num): #함수 camltbeAdded(num)
    for i in num: #num 안에 숫자가 있는동안
        if int(i) % s_num == 0 or s_num % int(i) == 0: #만약 int(i)나누기 s_num의 나머지가 0이거나 그 반대도 0일때
            total.append(int(i)) #total값에 int(i)추가 하기
    return total


while True:
    print('1.Add\n2.Print\n0.exit')
    m=int(input()) # m을 정수로 변환 하여 입력받기
    if m == 1: # 만약 m이 1이면
        num=input().split() # 여러 개 값을 한번에 입력 받기
        camltbeAdded(num) # camltbeAdded(num)함수 사용
    elif m == 2: # 만약 m이 2 이면
        print(tuple(camltbeAdded(num)))
    else: #둘다 아니면 
        break # 멈추기
        print('0')
