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
    m=int(input())
    if m == 1:
        num=input().split()
        camltbeAdded(num)
    elif m == 2:
        print(tuple(camltbeAdded(num)))
    else:
        break
        print('0')
