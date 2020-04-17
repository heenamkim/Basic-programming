#include <stdio.h>

int main()
{

    int fibonacci[21];
    int num;

    scanf("%d", &num);
    for (int i = 0; i <= 20; i++){
        if (i < 2)
            fibonacci[i] = i;
        else
            fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    printf("%d", fibonacci[num]);
}
