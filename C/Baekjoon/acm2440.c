#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int j = 0; j < N; j++)
        for (int i = N; 0 < i; i--)
            printf("*");


}
