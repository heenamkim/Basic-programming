#include <stdio.h>

int Factorial(int N)
{
    int total = 1;

    if (N < 0) {
        total = 0;
    }

    else{
        for (int i = N; i > 0; i--){
            total *= i;
        }
    }

    return total;
}


int main()
{
    int N;
    int res;

    scanf("%d", &N);
    res = Factorial(N);
    if (res)
        printf("%d", res);
    else
        printf("please re-enter your number");
}
