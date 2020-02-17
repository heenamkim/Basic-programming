#include <stdio.h>

int main()
{
  int total=0;
  int i,num;
  scanf("%d",&num);

  for(i=1;i<num+1;i++)

    total+=i;
  printf("%d",total);
  return 0;
}
