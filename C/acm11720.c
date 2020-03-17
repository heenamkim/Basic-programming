#include <stdio.h>

int main() {
int n;
int total=0;
scanf("%d",&n);
char num[n];
scanf("%s", &num);
for (int i = 0; num[i] != '\0'; i++)
  total+=num[i] - '0';
printf("%d", total);
return 0;
 }
