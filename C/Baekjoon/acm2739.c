#include <stdio.h>

int main()
{
  int num=0 ,n=1;
  scanf("%d",&num);

  while(n<=9)
  {  printf("%d * %d = %d\n",num,n,num*n);
    n++;
  }
  return 0;

}
