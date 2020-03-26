#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int r_num,num2;
  scanf("%d",&num2);
  srand(time(0));
  r_num = rand() % 100;
  if (r_num > num2)
    printf("%d is bigger than %d",r_num,num2);
  else if (r_num < num2)
    printf("%d is smaller than %d",r_num,num2);
  else if (r_num == num2)
    printf("same!");
  return 0;
}
