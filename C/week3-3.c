#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int r_num,num2;
  srand(time(0));
  r_num = rand() % 100;
  while (1){
    scanf("%d",&num2);
    if (r_num > num2)
      printf("High!\n");
    else if (r_num < num2)
      printf("Low..\n");
    else if (r_num == num2)
      printf("That's Right!\n");
    }
    return 0;
}
