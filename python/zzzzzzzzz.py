result={}

while True:
    name=input()
    if name == 'None':
        break
    else:    
        sub=input().split()
        list1=[]
        python=[]
        c=[]
        basic=[]
        total=[]
        for i in sub:
            list1.append(int(i))
            result[name]=list1
            python.append([0])

print(python)            
print(result)


