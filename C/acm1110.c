#include <stdio.h>

int main()
{
  int N,A,a,b,total,count=0;
  scanf("%d",&N);
  while(0<=N<=99){
    A=N;
    a=A/10;
    b=A%10;
    total=(a+b)%10;
    if(A!=total){
      A=total+(b*10);
      count++;}
    else if(A==total)
      break;}
  printf("%d",count);
  return 0;
}
