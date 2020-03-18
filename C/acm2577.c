#include <stdio.h>

int main()
{
int A,B,C;
char n[10000000];
int total=0;
scanf("%d",&A);
scanf("%d",&B);
scanf("%d",&C);
n[10000000]=A*B*C;
for (int i = 0; n[i] != '\0'; i++)
  total=n[i] - '0';
printf("%d", total);


}
