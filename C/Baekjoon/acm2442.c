#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int j = 0; j < N; j++){
        for (int i = 1; i < N-j; i++){
            printf(" ");
        }
            for (int k = 0; k <= j; k++){
                printf("*");
            }
            for (int o = 1; o <=j; o++){
                printf("*");
            }
            printf("\n");
    }



}
