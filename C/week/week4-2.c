#include <stdio.h>

int main()
{

int n,m;
int total=0;
scanf("%d",&n);
scanf("%d",&m);
for (int i=0; i<=n;i++)
  if (i%m==0)
    total+=i;
printf("Total = %d",total);
return 0;
}
