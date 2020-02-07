#파이썬 연습_5주차_리스트_실습5.py

list0=[0,1,2,3,4,5,6,7,8,9] #list0의 리스트
list1=[0,1,2,3,4,5,6,7,8,9] #list1의 리스트
while True:
    n=int(input('index =')) #n을 정수로 변환하여 입력받기
    if n >= 0: #만약 n이 0보다 크거다 같을때
        m=int(input('value =')) #m을 정수로 변환하여 입력받기
        list1[n]=m #list1의 n자리를 m으로 바꾸기
    elif n == -1: #만약 n이 -1이면
        break #멈추기
print(list0)
print(list1)
