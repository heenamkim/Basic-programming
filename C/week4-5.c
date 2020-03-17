#include <stdio.h>

int main() {
char num[50];
int total=0;
scanf("%s", &num);
for (int i = 0; num[i] != '\0'; i++){
  total = num[i] - '0';
  printf("%d\n", total);
}
return 0;
 }
