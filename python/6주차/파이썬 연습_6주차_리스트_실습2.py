#파이썬 연습_6주차_리스트_실습2.py

baskets=input().split() #한번에 여러값 입력받기

print('Total# of baskets is',len(baskets))

while True:
    num1 = int(input('basket# = ')) #정수로 변환하여 입력받기
    if num1 > len(baskets): #num1이 입력받은 값이 baskets의 길이보다 클때
        print("We don't have",num1,"th basket!")
        break
    else: #num1의  입력받은 값이 baskets의 길이보다 작으면
        num2 = int(input('num of candies =',)) #정수로 변환하여 입력받기 
        if num2 <= int(baskets[num1-1]): #만약 num2가 정수로 바꾼 baskets[num1-1]값 보다 크면
            baskets[num1-1]=int(baskets[num1-1])-num2 #baskets[num1-1]은 정수로 바꾼값에 num2 빼기
        else: #만약 num2가 정수로 바꾼 baskets[num1-1]값 보다 작으면
            baskets[num1-1]=0 #baskets[num1-1]값은 0
            print(num1,'candy ran out!')
            break
                
print(baskets)
            
    
