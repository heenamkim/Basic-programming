#include <stdio.h>

int main()
{
int list[3]={0};
int max,min;
scanf("%d",&list[0]);
scanf("%d",&list[1]);
scanf("%d",&list[2]);
max=list[0];
min=list[0];
for(int i=0;i<3;i++)
  if(max<list[i])
    max=list[i];
  else if(min>list[i])
    min=list[i];
printf("Max: %d\n",max);
printf("Min: %d\n",min);
return 0;
}
