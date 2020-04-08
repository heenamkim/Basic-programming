#include <stdio.h>

int main()
{
    int N;
    int change = 0, count = 0;

    scanf("%d", &N);
    change = 1000 - N;
    while (1) {

        if (change >= 500){
            change -= 500;
            count++;
        }
        else if (change >= 100){
            change -= 100;
            count++;
        }
        else if (change >= 50){
            change -= 50;
            count++;
        }
        else if (change >= 10){
            change -= 10;
            count++;
        }
        else if (change >= 5){
            change -= 5;
            count++;
        }
        else if (change >= 1){
            change -= 1;
            count++;
        }
        else if (change == 0)
            break;
    }

    printf("%d", count);
}
