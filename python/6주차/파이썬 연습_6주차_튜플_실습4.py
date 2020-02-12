#파이썬 연습_6주차_튜플_실습4.py

s_num=int(input())
total=[]

def camltbeAdded(num):
    for i in num:
        if int(i) % s_num == 0 or s_num % int(i) == 0:
            total.append(int(i))
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
