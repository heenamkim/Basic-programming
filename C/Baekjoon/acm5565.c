#include <stdio.h>

int main()
{
    int N;
    int price = 0;

    scanf("%d", &N);
    for (int i = 0; i < 9; i++){
        scanf("%d", &price);
        N -= price;
    }
    printf("%d", N);

}
