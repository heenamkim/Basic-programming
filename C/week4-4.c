#include <stdio.h>

int main()
{
int n,a;
scanf("%d",&n);
for (int i=0; i<=(n);i++)
  a=n%10^i;
printf("%d",a);

return 0;
}
