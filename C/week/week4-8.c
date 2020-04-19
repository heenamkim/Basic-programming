#include <stdio.h>

int main()
{
int player1=0;
int player2=0;
for(int i=0;i<5;i++){
  printf("Round %d\n",i+1);
  printf("Turn >>Player1\n");

  for (int j=0;j<3;j++) {
    int a;
    char b;
    scanf("%d %c",&a,&b);
    if (b=='n')
      player1+=a;
    else if (b=='d')
      player1+=2*a;
    else if (b=='t')
      player1+=3*a;}
  printf("Turn >>Player2\n");
  for (int j=0;j<3;j++){
    int a;
    char b;
    scanf("%d %c",&a,&b);
    if (b=='n')
      player2+=a;
    else if (b=='d')
      player2+=2*a;
    else if (b=='t')
      player2+=3*a;
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
  }
}
