#include <stdio.h>

int main()
{
int n;
int total=0;
scanf("%d",&n);
while (n != 0){
    total+=n%10;
    n=n/10;
  }
printf("Total = %d",total);
return 0;
}
