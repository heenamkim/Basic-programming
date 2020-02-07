#include <stdio.h>

int main()
{
  int result1,result2;
  int num1,num2;

  scanf("%d %d",&num1,&num2 );
  result1=num1/num2;
  result2=num1%num2;
  printf("%d/%d=%d\n",num1,num2,result1);
  printf("%d %d=%d",num1,num2,result2);
  return 0;
}
