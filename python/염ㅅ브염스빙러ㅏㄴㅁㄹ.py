

total=[2, 5, 4, 24, 3, 6, 64, 5, 3]
python=0
c=0
java=0
for i in range(len(total)):
    if i%3==1:
        python+=total[i]
    elif i%3==2:
        c+=total[i]
    elif i%3==0:
        java+=total[i]
        
print('python',python)
print('c',c)   
print('java',java)        
print(total)
