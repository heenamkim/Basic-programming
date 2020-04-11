#include <stdio.h>

int main()
{

    int fibonacci[21] = {0}, fibo[21] = {0};
    int num;
    int total = 0;


    for (int i = 0; i <= 20; i++){
        fibonacci[i] = i;

    }
    for (int i = 2; i <= 20; i++){
        total += fibonacci[i] + fibonacci[i-1];
        fibo[i] += total;
        printf("%d\n", fibo[i]);
    }

    // scanf("%d", &num);
    //
    //
    // total = fibonacci[num-1] + fibonacci[num-2];
    //
    //
    // printf("%d", total);
}
