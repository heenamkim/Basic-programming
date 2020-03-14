#include <stdio.h>

int main()
{
int num;
int player1=0;
int player2=0;
for (int i=0;i<5;i++){
  printf("Round %d\n",i+1);
  printf("Turn >> Player1\n");
  for (int k=0;k<3;k++){
    scanf("%d",&num);
    player1+=num;
    }
  printf("Turn >> Player2\n");
  for (int k=0;k<3;k++){
    scanf("%d",&num);
    player2+=num;
    }
  }
if (player1 > player2){
  printf("player1 Win!\n");
  printf("Total Score = %d\n",player1);
  }
else if (player1 < player2){
  printf("player2 win!\n");
  printf("Total Seore = %d\n",player2);
  }
else if (player1 == player2)
  printf("Draw\n");
return 0;
}
