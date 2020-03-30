#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int j = 1; j < N; j++){
        for (int i = 0; i < N-j; i++){
            printf(" ");
        }
        for (int k = 0; k < j; k++){
            printf("*");
        }

            printf("\n");
    }
    for (int j = -1; j < N; j++){
        for (int k = -1; k < j; k++){
            printf(" ");
        }
        for (int o = 1; o < N-j; o++){
            printf("*");
        }

            printf("\n");
    }


}
