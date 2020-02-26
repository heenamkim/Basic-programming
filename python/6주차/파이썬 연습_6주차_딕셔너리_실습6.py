#파이썬 연습_6주차_딕셔너리_실습6.py

result={} # result는 빈 딕셔너리
while True: 
    name=input() # name을 입력받기
    if name == 'None': # 만약 name이 None을 입력받으면 
        break # 멈추기
    else: # 그렇지 않으면
        sub=input().split() # 여러 값 한번에 입력 받기
        total=0 # total은 0
        for i in sub: # sub에 숫자가 있는 동안
            total+=int(i) # total에 정수로 변환한 i값 더하기
    result[name]=total/3 # 키 result[name]은 밸류 total/3
           
print(result)
