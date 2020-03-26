#include <stdio.h>

void sum()
{
int n;
int total=0;
scanf("%d",&n);
for (int i=0;i<=n;i++)
  total+=i;
printf("Total = %d",total);
}
int main()
{
sum();
return 0;
}
