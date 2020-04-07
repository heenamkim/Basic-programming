#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);
    for (int j = 1; j < N; j++){
        for (int i = 0; i < N-j; i++){
            printf(" ");
        }
        for (int k = 1; k < 2*j; k++){
            printf("*");
        }
        printf("\n");
    }
    for (int j = 0; j < N; j++){
        for (int i = 0; i < j; i++){
            printf(" ");
        }
        for (int k = 1; k < 2*N-2*j; k++){
            printf("*");
        }
        printf("\n");
    }



}
