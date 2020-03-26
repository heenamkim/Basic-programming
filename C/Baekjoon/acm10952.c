#include <stdio.h>

int main()
{
  int A,B,num=1;
while(num>0){
  scanf("%d %d",&A,&B);
  if(A==0 && B==0)
    break;
  else
    printf("%d \n",A+B);
    num++; }
  return 0;
}
