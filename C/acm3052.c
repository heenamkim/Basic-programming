#include <stdio.h>

int main()
{
int num[10];
int rem[10];
int count=0;
for (int i=0;i<10;i++)
  scanf("%d",&num[i]);
  for (int j=0;j<10;j++)
    rem[j]=(num[j]%42);
for (int k=0;k<10;k++)
  printf("%d\n",rem[k]);
}
