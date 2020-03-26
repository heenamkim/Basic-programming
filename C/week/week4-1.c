#include <stdio.h>

int main()
{

int n;
int odd=0,even=0;
scanf("%d",&n);
for(int i=0;i<=n;i++)
  if(i%2==0)
    even+=i;
  else
    odd+=i;
printf("Total Odd = %d\n",odd);
printf("Total Even = %d\n",even);
return 0;
}
