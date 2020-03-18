#include <stdio.h>

int main()
{
int num[10];
int rem[10];
int count=0;
for (int i=0;i<10;i++){
  scanf("%d",&num[i]);
  rem[i]=num[i]%42;
  for (int j=0;j<42;j++)
    if (rem[10]==j)
      count++;
        }
printf("%d\n",count);
}
