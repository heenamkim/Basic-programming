#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);
    for (int j = 0; j < N; j++){
        for (int i = 1; i < N-j; i++){
            printf(" ");
        }
        for (int k = 0; k < 1; k++){
            printf("*");
        for (int o = 0; o < 2*j-1; o++)
            printf(" ");
        if (j > 0){
            for (int a = k+j-1; a < k+j; a++)
                printf("*");
        }
        }

        printf("\n");
    }


}
