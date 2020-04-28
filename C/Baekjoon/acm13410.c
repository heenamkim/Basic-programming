#include <stdio.h>
#include <math.h>

int main()
{
    int N, K;
    int count = 0, n = 0, n2 = 0;
    int total = 0, rem = 0, count2 = 0;
    int gugudan[1000] = {0}, max = 0;
    scanf("%d %d", &N, &K);

    for (int i = 1; i <= K; i++){
        n = n2 = N * i;
        count = 0;

        while(n > 0){
            n /= 10;
            count++;
        }
        
        count2 = count-1;
        total = 0;
        for (int j = 0; j < count; j++){

            rem = n2 % 10;
            total += rem * round(pow(10.0, count2--));
            n2 /= 10;
        }
        gugudan[i] = total;
    }

    max = gugudan[1];
    for (int i = 1; i <= K; i++){
        if (max < gugudan[i]){
            max = gugudan[i];
        }
    }
        printf("%d",max);
}
