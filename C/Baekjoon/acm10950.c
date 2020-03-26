#include <stdio.h>

int main()
{
  int T=0,n=1,A,B;
  scanf("%d",&T);

  while(n<=T)
  {
    scanf("%d %d",&A,&B);
    n++;
    printf("%d\n",A+B);
  }
  return 0;
}
