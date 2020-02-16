#파이썬 연습_6주차_딕셔너리_실습6.py

result={}
total=0
while True:
    name=input()
    if name == 'None':
        break
    else:    
        sub=input().split()
        for i in sub:
            result[name]=(total+int(i))/3
print(result)
