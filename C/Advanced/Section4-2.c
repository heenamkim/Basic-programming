#include <stdio.h>

int main()
{

    int num;

    while (1){
        if (scanf("%d", &num) == EOF){
            printf ("end");
            break;
        }
        else {
            if (num < 1)
                printf("Please retype the number..\n");
            else{
                printf("aliquot part of %d =", num);
                for (int i = 1; i <= num; i++){
                    if (num % i == 0){
                        printf(" %d", i);
                    }
                }
                printf("\n");
            }
        }
    }

}
