#include <stdio.h>

int main()
{
int list[10]={0};
int rem[10]={0};
int count=0;
for (int i=0;i<10;i++){
  scanf("%d\n",&list[i]);
  rem[i]=list[i]%42;
  }
  for (int i=0; i<sizeof(rem)/sizeof(int);i++)
    if( i not in rem)
      count++;
  printf("%d",count);
return 0;
}
