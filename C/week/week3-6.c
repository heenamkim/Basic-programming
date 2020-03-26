#include <stdio.h>

int main()
{
int total=0,count=0;
int A;
while(1){
  if (total>50)
    break;
  else if (total<=50){
    scanf("%d",&A);
    total+=A;
    count++;
    }
  }
printf("Total = %d\n",total-A);
printf("Count = %d\n",count-1);

return 0;
}
