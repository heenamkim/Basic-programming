#include <stdio.h>

int main()
{
  int A,B;
  scanf("%d",&A);
  scanf("%d",&B);
  if (A>B)
    printf("%d is bigger than %d",A,B);
  else if (A<B)
    printf("%d is smaller then %d",A,B);
  else
    printf("same!");
  return 0;
}
