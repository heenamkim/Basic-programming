#파이썬 연습_4주차_반복문_실습5.py

n=input() #n을 입력
a=0 #a는 0
total=0 #total은 0
for i in n: # n 안에 i가 있으면
    total+=int(i) * 10 **a #i 를 정수로 바꾸고 10에 a승을 한뒤 total에 더함
    a+=1 # a는 1씩 증가
    print(total)
    
  
