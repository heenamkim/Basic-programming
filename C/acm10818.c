#include <stdio.h>

int main()
{
  int A,max,min;
  int list[100]={0};
  scanf("%d",&A);
  for (int j=0;j<A;j++)
    scanf("%d ",&list[j]);
  max=list[0];
  min=list[0];
  for(int i=0;i<A;i++)
    if (max>list[i])
      max=list[i];
    else if (min<list[i])
      min=list[i];
  printf("%d %d",min,max);
return 0;
}
