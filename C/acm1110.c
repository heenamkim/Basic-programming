#include <stdio.h>

int main()
{
  int N,A,a,b,total,count=0;
  scanf("%d",&N);
  A=N;
  while(0<=N<=99){
    a=A/10;
    b=A%10;
    total=(a+b)%10;
    A=total+(b*10);
    count++;
    if(A==N)
      break;
  }
  printf("%d",count);
  return 0;
}
