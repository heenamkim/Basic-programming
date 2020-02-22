#acm1110.py

a=0
b=0
total=0
A=int(input())
while True:
    if A<10:
        total=a+0
    elif total==A:
        print(total)
    elif A>=10:
        a=A%10
        b=A//10
        total=a+b
        
