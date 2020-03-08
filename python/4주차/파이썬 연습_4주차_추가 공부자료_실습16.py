#파이썬 연습_4주차_추가 공부자료_실습16.py

num=input().split()
x=num[0] # x는 num[0]
for i in range(len(num)): # i가 num의 길이만큼 있는동안
    if int(i)>0: # 만약 i가 0보다 크면
        num[int(i-1)]=num[int(i)] # num[int(i-1)]는 num[int(i)]
num[-1]=x # num[-1]은 x
print(num)
    
