#include <stdio.h>

int main()
{
  int N,i,j,k;
  scanf("%d",&N);

  for(i=0;i<N;i++){
    for(k=1;k<N-i;k++){
      printf(" ");}
      for(j=0;j<=i;j++){
  	printf("*");}
      printf("\n");}
}
