#파이썬 연습_6주차_딕셔너리_실습6.py

result={}
while True:
    name=input()
    if name == 'None':
        break
    else:    
        sub=input().split()
        total=0
        for i in sub:
            total+=int(i)
    result[name]=total/3
           
print(result)
