#include <stdio.h>

int main()
{
int list[9]={0};
int max=0,index;
max=list[0];
for (int i=0;i<9;i++){
  scanf("%d",&list[i]);
  if (max<list[i]){
    max=list[i];
    index=i;
    }
  }
printf("%d\n",max);
printf("%d",index+1);
}
