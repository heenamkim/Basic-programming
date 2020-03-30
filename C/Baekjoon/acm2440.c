#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int j = 0; j < N; j++){
        for (int i = 0; i < N-j; i++){
            printf("*");
        }
        printf("\n");
    }



}
