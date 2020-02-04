#파이썬 연습_1주차_계산기_실습1

a=int(input()) #a를 정수로 변환
op=input() #op에 문자열 입력     
b=int(input()) #a를 정수로 변환
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
