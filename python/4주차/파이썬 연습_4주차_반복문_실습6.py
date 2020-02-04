#파이썬 연습_4주차_반복문_실습6.py

OrangeJuice = 1200
Coffee = 900
Coke = 800
ChocolateLatte = 1500
SelectMenu = int(input('Select Menu >>'))
while True:
    if SelectMenu == 1:
        if OrangeJuice > 0:
            print('Balanec>>', OrangeJuice)
            InsertCoin = int(input('insert Coin>>'))
            OrangeJuice=OrangeJuice-InsertCoin
            
        elif OrangeJuice <= 0 :
            print(' Here your drink')
            print('Change =' ,-OrangeJuice)
            break
    if SelectMenu == 2:
        if Coffee > 0:
            print('Balanec>>', Coffee)
            InsertCoin = int(input('insert Coin>>'))
            Coffee=Coffee-InsertCoin
            
        elif Coffee <= 0 :
            print(' Here your drink')
            print('Change =' ,-Coffee)
            break
    if SelectMenu == 3:
        if Coke > 0:
            print('Balanec>>', Coke)
            InsertCoin = int(input('insert Coin>>'))
            Coke=Coke-InsertCoin
            
        elif Coke <= 0 :
            print(' Here your drink')
            print('Change =' ,-Coke)
            break
    if SelectMenu == 4:
        if ChocolateLatte > 0:
            print('Balanec>>', ChocolateLatte)
            InsertCoin = int(input('insert Coin>>'))
            ChocolateLatte=ChocolateLatte-InsertCoin
            
        elif ChocolateLatte <= 0 :
            print(' Here your drink')
            print('Change =' ,-ChocolateLatte)
            break


