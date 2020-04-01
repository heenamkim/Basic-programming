#include <stdio.h>

int main()
{
    int num[100] = {0};
    int n = 0, total = 0, max = 0, min = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &num[i]);
        total += num[i];
    }
    max = num[0];
    min = num[0];
    for (int i = 0; i < n; i++){
        if (max < num[i])
            max = num[i];
        if (min > num[i])
            min = num[i];
    }
    printf("Max : %d\n", max);
    printf("Min : %d\n", min);
    printf("Avg = %.2lf", (double)(total-max-min) / (n-2));

}
