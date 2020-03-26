#include <stdio.h>

void getDivisor()
{
int n;
int count=0;
scanf("%d",&n);
for (int i=1;i<=n;i++)
  if (n%i ==0)
    count+=1;
printf("Count = %d",count);
}
int main()
{
getDivisor();
return 0;
}
