#include <stdio.h>

void getCount()
{
int n1,n2,m;
int count=0;
scanf("%d %d %d",&n1,&n2,&m);
for (int i=n1;i<=n2;i++)
  if (i%m ==0)
    count+=1;
printf("Count = %d",count);
}
int main()
{
getCount();
return 0;
}
