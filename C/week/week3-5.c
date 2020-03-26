#include <stdio.h>

int main()
{
int list[5]={0};
int max,min;
scanf("%d %d %d %d %d",&list[0],&list[1],&list[2],&list[3],&list[4]);
max=list[0];
min=list[0];
for(int i=0;i<5;i++)
  if (max<list[i])
    max=list[i];
  else if (min>list[i])
    min=list[i];
printf("Max: %d\n",max);
printf("Min: %d\n",min);
return 0;
}
