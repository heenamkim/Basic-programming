#include <stdio.h>

int main()
{
  int H,M,total;
  scanf("%d %d",&H,&M);
  H=H*60;
  M=M*1;
  total=H+M-45;
  if(total<=0)
    printf("23 %d",total+60);
  else {
    H=total/60;
    M=total%60;
    printf("%d %d",H,M);
  }
  return 0;
}
