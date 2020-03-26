#include <stdio.h>

int main()
{
int num[5]={0};
int total=0;
for(int i=0;i<5;i++)
  scanf("%d",&num[i]);
for(int i=0;i<5;i++)
  total+=num[i]*num[i];
printf("%d",total%10);
}
