#include <stdio.h>

int main()
{
  int T,i;
  scanf("%d",&T);

  for(i=1;T+1>i;i++)
  {
    int A,B;
    scanf("%d %d",&A,&B);
    printf("Case #%d: %d\n",i,A+B);
  }
  return 0;
}
