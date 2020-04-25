#include <stdio.h>
#include <math.h>


int main()
{
    int N;
    int count = 0, num = 0, num2 = 0;
    int rem = 0, total = 0, n = 0;
    int a = 0;
    scanf("%d", &N);


    for (int j = 0; j < N; j++){

        num = j;
        num2 = j;

        count = 0;
        while(num2 > 0){
            num2 /= 10;
            count++;
        }
        total = 0;
        n = 0;
        for (int i = 0; i < count; i++){
            total += num % 10;
            rem = num % 10;
            total += rem * round(pow(10.0, i));
            n += rem * round(pow(10.0, i));
            num /= 10;
        }
        if (total == N){
            a = 1;
            printf("%d\n", n);
            break;
        }
    }
    if (a == 0)
        printf("0");
}
