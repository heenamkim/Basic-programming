#include <stdio.h>

int main()
{
int a,b,i;
int count=0,total=0;
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
  if(i%2==0){
    count++;
    total+=i;}
printf("count = %d\n",count);
printf("total = %d\n",total);
return 0;
}
