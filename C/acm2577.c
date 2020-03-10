#include <stdio.h>

int main()
{
int a[3];
int num[10];
int list[100];
int total=0;
//int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
for(int i=0;i<3;i++)
  scanf("%d",&a[i]);
  total=a[0]*a[1]*a[2];
  for (int j=0;total<10;j++)
    list[j]=total%10;
    for (int k=0;k<4;k++)
      printf("%d\n",list[k]);
}
