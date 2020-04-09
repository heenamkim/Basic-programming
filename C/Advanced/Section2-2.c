#include <stdio.h>

int main()
{
    int max = 0, min = 0, total = 0, avg = 0;

    for (int i = 0; i < 7; i++){
        int num = 0;
        scanf("%d", &num);
        total += num;
        if (num >= max)
            max = num;
        if (num <= min)
            min = num;
    }

    printf("max = %d\n", max);
    printf("min = %d\n", min);
    printf("total = %d\n", total);
    printf("avg = %lf\n", (double)total / 7);
}
