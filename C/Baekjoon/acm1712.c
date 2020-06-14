#include<stdio.h>

int main()
{
    int a, b, c;
    int ab_total = 0, c_total = 0;
    int amount = 1;

    scanf("%d %d %d", &a, &b, &c);

    while(1) {
        ab_total = a + (b * amount);
        c_total = c * amount;
        if (ab_total < c_total) {
            printf("%d", amount);
            break;
        }
        else (
            amount++;
        )
    }
}
