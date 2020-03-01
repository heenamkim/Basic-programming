#파이썬 연습_6주차_딕셔너리_실습8.py

dic={'admin':'root'}
while True:
    print('1.Signed up\n2.Sianen in\n0.exit')
    num=int(input())
    if num == 0:
        print(dic)
        break
    elif num == 1:
        new_id=input('ID =')
        new_pw=int(input('PW ='))
        dic[new_id]=new_pw
        print('Joined Complete!')
    else:
        l_id=input('ID =')
        I_pw=int(input('PW ='))
        for i in 5 :
            if dic[i] == i:
                print('Loged in Complete!')
            elif dic[i] != i:
                print("Wrong rassword! Try", i,'/5')
                l_pw=int(input('PW ='))
                if count > 5 :
                    print("There's no account. Please join us!")
                    print('password')
                    new_pw=int(input('New PW ='))
                    


