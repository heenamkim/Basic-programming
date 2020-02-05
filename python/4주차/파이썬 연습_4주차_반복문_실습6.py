#파이썬 연습_4주차_반복문_실습6.py

OrangeJuice = 1200 #orange juice는 1200
Coffee = 900 #coffee는 900
Coke = 800 #coke 는 800
ChocolateLatte = 1500 #chcolateLatte는 1500
SelectMenu = int(input('Select Menu >>')) #사고 싶은 메뉴 입력받기
while True: #사실이면 반복
    if SelectMenu == 1: #만약 1번 메뉴를 입력받았고
        if OrangeJuice > 0: #남은 금액이 0보다 크면
            print('Balanec>>', OrangeJuice) #남은 가격을 프린트함
            InsertCoin = int(input('insert Coin>>')) # 넣을 동전값을 입력
            OrangeJuice=OrangeJuice-InsertCoin # 음료값에서 받은 금액 차감하기
            
        elif OrangeJuice <= 0 : # 남은 금액이 0보다 작거나 같으면
            print(' Here your drink')#음료 주기
            print('Change =' ,-OrangeJuice) #잔돈이 남으면 잔돈 돌려주기
            break
    if SelectMenu == 2: #만약 2번 메뉴를 입력받았고
        if Coffee > 0: #남은 금액이 0보다 크면
            print('Balanec>>', Coffee) #남은 가격을 프린트함
            InsertCoin = int(input('insert Coin>>')) # 넣을 동전값을 입력
            Coffee=Coffee-InsertCoin # 음료값에서 받은 금액 차감하기
            
        elif Coffee <= 0 : # 남은 금액이 0보다 작거나 같으면
            print(' Here your drink') #음료 주기
            print('Change =' ,-Coffee) #잔돈이 남으면 잔돈 돌려주기
            break
    if SelectMenu == 3: #만약 3번 메뉴를 입력받았고
        if Coke > 0: #남은 금액이 0보다 크면
            print('Balanec>>', Coke) #남은 가격을 프린트함
            InsertCoin = int(input('insert Coin>>')) # 넣을 동전값을 입력
            Coke=Coke-InsertCoin # 음료값에서 받은 금액 차감하기
            
        elif Coke <= 0 : # 남은 금액이 0보다 작거나 같으면
            print(' Here your drink') #음료 주기
            print('Change =' ,-Coke) #잔돈이 남으면 잔돈 돌려주기
            break
    if SelectMenu == 4: #만약 4번 메뉴를 입력받았고
        if ChocolateLatte > 0: #남은 금액이 0보다 크면
            print('Balanec>>', ChocolateLatte) #남은 가격을 프린트함
            InsertCoin = int(input('insert Coin>>')) # 넣을 동전값을 입력
            ChocolateLatte=ChocolateLatte-InsertCoin # 음료값에서 받은 금액 차감하기
            
        elif ChocolateLatte <= 0 : # 남은 금액이 0보다 작거나 같으면
            print(' Here your drink') #음료 주기
            print('Change =' ,-ChocolateLatte) #잔돈이 남으면 잔돈 돌려주기
            break


