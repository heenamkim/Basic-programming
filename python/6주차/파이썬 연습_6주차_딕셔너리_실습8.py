#파이썬 연습_6주차_딕셔너리_실습8.py

dic={'admin':'root'} # dic 이름을 가진 딕셔너리
count=0
while True:
    print('1.Signed up\n2.Sianen in\n0.exit')
    num=int(input()) # num 정수로 변환하여 입력받기
    if num == 0: # 만약 num가 0이면
        print(dic)
        break
    elif num == 1: # 만약 num가 1이면
        new_id=input('ID =') # new_id 입력받기
        new_pw=input('PW =') # new_pw 입력받기
        dic[new_id]=new_pw # new_id에 new_pw 저장하기
        print('Joined Complete!')
    else: # 만약 둘다 아니라면
        for key,value in dic.items(): # dic.items()가 key,value에 차례대로 입력받을때
            lo_id = input('ID =') # lo_id 입력받기
            if lo_id not in dic.keys(): # 만약 lo_id가 dic.keys()안에 없으면
                print("There's no account. Please join us!")
            else: # 안에 있으면
                for count in range(6): # count를 6번 입력받을때
                    if count<5: # 만약 conunt가 5보다 작으면
                        lo_pw = input('PW =') # lo_pw 입력받기
                        if dic[lo_id] in lo_pw: # 만약 dic[lo_id] 안에 lo_pw가 있으면
                            print('Loged in Complete!')
                            break
                        elif count<4: # 만약 count가 4보다 작으면
                            count+=1 # count에 1더하기
                            print("Wrong rassword! Try", count,'/5')
                    else: # 만약 count가 5보다 같거나  크면
                        print('Reset password! Input new password')
                        new_pw=input('New PW =') # new_pw 입력받기
                        dic[lo_id]=new_pw # dic[lo_id]에 new_pw 저장하기
            break
                        

        


