#파이썬 연습_6주차_리스트_실습1.py

judge=int(input())
num=input().split()
max_num=int(num[0])
min_num=int(num[0])
total_list=[]
total=0
avg=0

for i in num:
    if max_num < int(i):
        max_num = int(i)
    elif min_num > int(i):
        min_num = int(i)
    total+=int(i)
    total_list.append(int(i))
avg=(total-max_num-min_num)/(judge-2)

print(total_list)
print('Max:',max_num,',','min:',min_num)
print('Avg =',"%.2f"%avg)
