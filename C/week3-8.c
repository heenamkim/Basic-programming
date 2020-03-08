#include <stdio.h>

int main()
{
int A;
int total=1;
scanf("%d",&A);
for(int i=1;i<=A;i++)
  total*=i;
printf("Total = %d",total);
return 0;
}
