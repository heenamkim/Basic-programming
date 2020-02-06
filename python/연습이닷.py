
n=int(input())
total=0
Avg=0
listnum=''
for i in range(n):
    m=input()
    total+=int(m)
    Avg=total/n
    listnum+=[m]
print(listnum)
print('%.2f'%Avg)
