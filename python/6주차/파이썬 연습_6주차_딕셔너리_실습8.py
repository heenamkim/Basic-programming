#파이썬 연습_6주차_딕셔너리_실습8.py

dic={'admin':'root'}
count=0
while True:
    print('1.Signed up\n2.Sianen in\n0.exit')
    num=int(input())
    if num == 0:
        print(dic)
        break
    elif num == 1:
        new_id=input('ID =')
        new_pw=input('PW =')
        dic[new_id]=new_pw
        print('Joined Complete!')
    else:
        new_id=input('ID =')
        for new_id in dic:
                print("There's no account. Please join us!")
            else:
                new_pw=input('PW =')
                if new_id == dic[new_id]:
                    print('Loged in Complete!')
                else:
                    for i in range(5):
                        if count<5:
                            count+=1
                            print("Wrong rassword! Try", count,'/5')
                        else:
                            new_pw=input('PW =')
                            dic[new_id]=l_pw
        


