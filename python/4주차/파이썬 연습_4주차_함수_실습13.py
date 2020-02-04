#파이썬 연습_4주차_함수_실습13.py

n1,n2,m=input().split()
n1=int(n1)
n2=int(n2)
m=int(m)

def GetCount(n1,n2,m):
    count=0
    for i in range(1,n2):
        if n1<= m*i <= n2:
            count+=1
    return count
print('Count = ', GetCount(n1,n2,m))
    
    

