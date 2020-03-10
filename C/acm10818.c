#include <stdio.h>

int main()
{
  int A,max,min;
  int arr[1000000]={0};
  int i, j;
  scanf("%d", &A);
  for (j=0; j<A; j++)
    scanf("%d",&arr[j]);
  max=arr[0];
  min=arr[0];
  for(i=0;i<A;i++){
    if (max<arr[i])
      max=arr[i];
    else if (min>arr[i])
      min=arr[i];
    }
  printf("%d %d",min,max);
return 0;
}
