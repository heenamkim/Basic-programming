#include <stdio.h>

int main()
{
    int n;
    int total=1;
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
        total *= i;
    printf("%d", total);

}
