#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int you[3]={0}, player[3]={0};
    int card[13]={0};
    int a = 0, b = 0, k = 0, first = 0;
    srand(time(NULL));

    for (int i = 0; i < 6; i++){
        card[i] = rand() % 13+1;
        if (i < 3){
            you[i] = card[i];
        }
        else{
            player[i-3] = card[i];
        }
        for (int j = 0; j < i; j++){
            if ( card[i] == card[j]){
                i--;
                break;
            }
        }
    }

    first = rand() % 2;
    if ( first == 0){
        int num1 = 0, num2 = 0;
        printf("You First\n");
        printf("Your card is [");
        for (int k = 0; k < 3; k++){
                printf("%d ", you[k]);
        }
        printf("]\n");
        while (1){
            printf("Your turn >> ");
            scanf("%d", &num1);
            num2 = player[k];
            printf("Player >> %d\n", num2);
            num1 > num2 ? a++ : b++;
            printf("== score [%d : %d] ==\n", a, b);
            k++;
            if (a == 2){
                printf("You Win!\n");
                break;
            }
            else if (b == 2){
                printf("You Lose~\n");
                break;

            }
        }
    }
    else{
        int num1 = 0, num2 = 0;
        printf("Player First\n");
        printf("Your card is [");
        for (int k = 0; k < 3; k++){
                printf("%d ", you[k]);
        }
        printf("]\n");
        while (1){
            num2 = player[k];
            printf("Player >> %d\n", num2);
            printf("Your turn >> ");
            scanf("%d", &num1);
            num1 > num2 ? a++ : b++;
            printf("== score [%d : %d] ==\n", a, b);
            k++;
            if (a == 2){
                printf("You Win!\n");
                break;
            }
            else if (b == 2){
                printf("You Lose~\n");
                break;

            }
        }
    }
}
