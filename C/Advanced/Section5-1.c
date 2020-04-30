#include <stdio.h>

int main()
{
    char N;
    int count = 0;

    while(scanf("%c", &N) != EOF){

        for (int i = 'A'; i < 'Z'; i++){
            if (i == N){
                count = 1;
                printf("Upper case\n");
            }
        }
        for (int i = 'a'; i < 'z'; i++){
            if (i == N){
                count = 1;
                printf("Lower case\n");
            }
        }
        for (int i = '0'; i < '9'; i++){
            if (i == N){
                count = 1;
                printf("Arabic number\n");
            }
        }
        if (count == 0){
            printf("Special Character\n");
        }
    }
    printf("END");
}
