#파이썬 연습_6주차_딕셔너리_실습7.py

result={}

while True:
    name=input()
    if name == 'None':
        break
    else:    
        sub=input().split()
        list1=[]
        python=0
        total=0
        for i in sub:
            list1.append(int(i))
            result[name]=list1
        python=list1[0]
        total=sum(python)/3
print(total)
print(result)


