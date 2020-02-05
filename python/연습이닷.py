
n=input().split()
a=0
total=0
for i in n:
    total+=int(i) * 10 **a
    a+=1
print(total)
