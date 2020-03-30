#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int j = 0; j < N; j++){
        for (int i = 1; i <= j; i++){
            printf(" ");
        }
            for (int k = 0; k < N-j; k++){
                printf("*");
            }
            printf("\n");
    }



}
