#include <stdio.h>

int main()
{
int n[5]={0};
int x;
scanf("%d %d %d %d %d",&n[0],&n[1],&n[2],&n[3],&n[4]);
x=n[0];
for (int i=0;i<5;i++)
  n[i-1]=n[i];
n[-1]=x;
printf("%d %d %d %d %d",n[0],n[1],n[2],n[3],n[4]);
return 0;
}
