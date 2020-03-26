#include <stdio.h>

int main()
{
int num;
scanf("%d",&num);

if(num>=90)
  printf("A");
else if(num>=75)
  printf("B");
else if(num>=60)
  printf("C");
else if(num>=40)
  printf("D");
else if(num<40)
  printf("F");
return 0;
}
