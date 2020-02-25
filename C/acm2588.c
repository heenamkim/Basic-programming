#include <stdio.h>

int main()
{
  int A,B,a,b,c,d;
  scanf("%d",&A);
  scanf("%d",&B);
  a=B%10;
  b=B/10;
  d=b%10;
  c=B/100;
  printf("%d\n",A*a);
  printf("%d\n",A*d);
  printf("%d\n",A*c);
  printf("%d\n",A*B);
  return 0;
}
