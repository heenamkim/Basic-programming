#include <stdio.h>

int main()
{
int num;
int total=0;
while(num>0){
  scanf("%d",&num);
  if(num%3==0)
    break;
  else
    total+=num;}
printf("%d",total);
return 0;
}
