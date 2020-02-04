#파이썬 연습_3주차_산술 문제_실습4.py

a=input()
b=input()
c=input()
list=[a,b,c]
Max=int(list[0])
Min=int(list[0])
for i in list:
    if Max<int(i):
        Max=int(i)
    if Min>int(i):
        Min=int(i)

print('Max=',Max)
print('Max=',Min)
