#include <stdio.h>

int main()
{
int num,coin;
int total;
int OrangeJuice=1200;
int Coffee=900;
int Coke=800;
int ChocolateLatte=1500;
printf("1. Orange Juice 1200\n");
printf("2. Coffee 900\n");
printf("3. Coke 800\n");
printf("4. Chocolate Latte 1500\n");
printf("Select Menu >> ");
scanf("%d",&num);
while(1)
  if (num == 1){
    if (OrangeJuice > 0){
      printf("Balance >>%d\n",OrangeJuice);
      printf("Insert Coin >>");
      scanf("%d",&coin);
      OrangeJuice-=coin;
    }
      if (coin == 0){
        printf("Cancel");
        break;
      }
    else if (OrangeJuice <= 0){
      printf("Here your drink\n");
      printf("Change = %d\n",-OrangeJuice);
      break;
    }
  }
  else if (num == 2){
    if (Coffee > 0){
      printf("Balance >>%d\n",Coffee);
      printf("Insert Coin >>");
      scanf("%d",&coin);
      Coffee-=coin;
    }
      if (coin == 0){
        printf("Cancel");
        break;
    }
    else if (Coffee <= 0){
      printf("Here your drink\n");
      printf("Change = %d\n",-Coffee);
      break;
    }
  }
  else if (num == 3){
    if (Coke > 0){
      printf("Balance >>%d\n",Coke);
      printf("Insert Coin >>");
      scanf("%d",&coin);
      Coke-=coin;
    }
      if (coin == 0){
        printf("Cancel");
        break;
    }
    else if (Coke <= 0){
      printf("Here your drink\n");
      printf("Change = %d\n",-Coke);
      break;
    }
  }
  else if (num == 4){
    if (ChocolateLatte > 0){
      printf("Balance >>%d\n",ChocolateLatte);
      printf("Insert Coin >>");
      scanf("%d",&coin);
      ChocolateLatte-=coin;
    }
      if (coin == 0){
        printf("Cancel");
        break;
    }
    else if (ChocolateLatte <= 0){
      printf("Here your drink\n");
      printf("Change = %d\n",-ChocolateLatte);
      break;
    }
  }

return 0;
}
