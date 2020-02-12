#파이썬 연습_6주차_리스트_실습2.py

baskets=input().split()

print('Total# of baskets is',len(baskets))

while True:
    num1 = int(input('basket# = '))
    if num1 > len(baskets):
        print("We don't have",num1,"th basket!")
        break
    else:
        num2 = int(input('num of candies =',))
        if num2 <= int(baskets[num1-1]):
            baskets[num1-1]=int(baskets[num1-1])-num2
        else:
            baskets[num1-1]=0
            print(num1,'candy ran out!')
            break
                
print(baskets)
            
    
