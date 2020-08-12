#include<stdio.h>

int main()
{
    int number;
    int count = 0;

    scanf("%d", &number);
    while(1) {
         if (number >= 5) {
             count++;
             number -= 5;
        }
        else if (number >= 3) {
            count++;
            number -= 3;
        }
        else if (number < 3) {
            break;
        }
    }
    // if (number != 0) {
    //     printf("-1");
    // }
    // else {
    //     printf("%d", count);
    // }
    printf("%d", count);
}
