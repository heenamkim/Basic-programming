#include <stdio.h>

int main()
{
int n,x;
double total=0,avg=0;
int num[1000];
scanf("%d",&n);
for (int i=0;i<n;i++){
  scanf("%d",&num[i]);
  total+=num[i];
  x=num[0];
  for (int j=0;j<n;j++)
    if(x<num[j])
      x=num[j];
    }
avg=total/n;
printf("%.2f%%\n",avg/x*100);

}
