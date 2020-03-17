#include <stdio.h>

int main()
{
int A[5]={0};
int total=0,min=0;
for (int i=0;i<5;i++)
  scanf("%d",&A[i]);
min=A[0]+A[3]-50;
for (int i=0;i<2;i++){
  for (int j=0;j<3;j++)
    if(min>A[j]+A[i+3]-50)
      min=A[j]+A[i+3]-50;
}
printf("%d",min);
return 0;
}
