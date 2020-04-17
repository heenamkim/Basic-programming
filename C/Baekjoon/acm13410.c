#include <stdio.h>
#include <math.h>

int main()
{
    int N, K;
    int gugudan[1000] = {0};
    int k = 1;
    double res;

    scanf("%d %d", &N, &K);

    for (int i = 0; i <= K; i++){
        int num = 0;
        if (num )
        res = pow(10.0,k++);
        num =  (N*i) % res;
        gugudan[i] = num;
        num /= 10;
        k++;
    }


    for (int i = 0; i <= K; i++)
        printf("%d\n", gugudan[i]);

}
