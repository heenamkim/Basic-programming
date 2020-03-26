#acm1110.py

a=0
b=0
total=0
num=1
A=int(input())
while True:
    if A<10:
        total=A+0
    else:
        if total==A:
            print(num)
        else:
            a=A%10
            b=A//10
            total=a+b
            num+=1
