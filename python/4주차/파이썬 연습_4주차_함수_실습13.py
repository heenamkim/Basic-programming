#파이썬 연습_4주차_함수_실습13.py

n1,n2,m=input().split() #n1,n1,m을 한번에 입력받기
n1=int(n1) #n1을 정수로 변환
n2=int(n2) #n2를 정수로 변환
m=int(m) #m을 정수로 변환

def GetCount(n1,n2,m): #getcount함수 사용
    count=0 #count는 0
    for i in range(1,n2): #i를 1부터 n2까지 반복
        if n1<= m*i <= n2: #만약 m*i가 n1보다 크거나 작고 n2보다 작거나 같으면
            count+=1 #count에 1더하기
    return count #count 첨으로 되돌아 가기
print('Count = ', GetCount(n1,n2,m))
    
    

