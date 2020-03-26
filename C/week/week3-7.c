#include <stdio.h>

int main()
{
int A;
int total=0;
scanf("%d",&A);
for(int i=0;i<=A;i++)
  total+=i;
printf("Total = %d",total);
return 0;
}
