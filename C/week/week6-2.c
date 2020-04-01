#include <stdio.h>

int main()
{
    int n[10] = {0};
    int num = 0;

    scanf("%d", &num);
    for (int i = 1; i < num+1; i++)
        scanf("%d", &n[i]);
    printf("Total # of baskets is %d.\n", num);
    while (1) {
        int candy = 0, basket = 0;

        printf("basket # = ");
        scanf("%d", &basket);
        if (basket > num){
            printf("We dont have %dth basket!\n", basket);
            break;
        }
        printf("num of candies = ");
        scanf("%d", &candy);

        n[basket] -= candy;
        if (n[basket] < 0){
            n[basket] = 0;
            printf("7th candy ran out!\n");
            break;
        }
    }
    printf("[ ");
    for (int j = 1; j < num+1; j++){
        printf("%d ", n[j]);
    }
    printf("]");
}
