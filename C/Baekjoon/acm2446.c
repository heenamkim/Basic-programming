#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int j = 0; j < N; j++){
        for (int i = 0; i < j; i++){
            printf(" ");
        }
        for (int k = 1; k < N-j; k++){
            printf("*");
        }
        for (int k = 0; k < N-j; k++){
            printf("*");
        }

            printf("\n");
    }
    for (int j = 1; j < N; j++){
        for (int i = 1; i < N-j; i++){
            printf(" ");
        }
        for (int k = 0; k < j; k++){
            printf("*");
        }
        for (int k = -1; k < j; k++){
            printf("*");
        }

            printf("\n");
    }


}
