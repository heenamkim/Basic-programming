#include <stdio.h>

int main()
{
    int a, b, v;
    int number;


    scanf("%d %d %d", &a, &b, &v);

    number = (v - b - 1) / (a - b) + 1;

    printf("%d", number);
}
