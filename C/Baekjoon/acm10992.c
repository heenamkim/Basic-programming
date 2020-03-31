#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);
    for (int i = 1; i <= N; i++){
        for (int j = i; j <= N-1; j++){
            printf(" ");
        }
        for (int z = 2; z <= 3; z++){
            printf("*");
        }
        for (int k = 3; k <= i*2-1; k++){
            if (k == 1|| k == i*2-1)
                printf("*");
            else
                printf("0");
        }
        printf("\n");
    }
}
