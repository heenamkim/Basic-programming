#파이썬 연습_6주차_딕셔너리_실습6.py

result={}

while True:
    name=input()
    if name == 'None':
        break
    else:    
        sub=input().split()
        list1=[]
        avg_list=[]
        total=0
        for i in sub:
            list1.append(int(i))
            result[name]=list1
            i=list1[i]
          
print(result)


