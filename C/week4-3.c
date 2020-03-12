#include <stdio.h>

int main()
{
int n;
int count=0;
scanf("%d",&n);
for (int i=0; i<=n;i++)
  if (n%i==0)
    count++;
printf("Count = %d",count);
return 0;
}
