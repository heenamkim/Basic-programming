#파이썬 연습_1주차_계산기_실습2

a,op,b=input().split() #입력받은 값을 공백 기준으로 분리
a=int(a) #a를 정수로 변환
b=int(b) #a를 정수로 변환
if op=='+': #만약 op가 +일때
   res=(a+b) #res가 a+b일때
   print('%.2f'%res)  # res 값을 소수점 둘째자리까지 출력해라
elif op=='-': # +가 아닌 -라면
    res=(a-b) #res가 a-b일때 
    print('%.2f'%res) # res 값을 소수점 둘째자리까지 출력해라
elif op=='*': # +,- 가 아닌 *라면
    res=(a*b)  #res가 a*b일때
    print('%.2f'%res) # res 값을 소수점 둘째자리까지 출력해라
elif op=='/': # +,-,*가 아닌 /라면
    res=(a/b)  #res가 a/b일때
    print('%.2f'%res) # res 값을 소수점 둘째자리까지 출력해라
else: #다 아닐경우
    print("다시 입력해 주세요") # print 해라 

 


