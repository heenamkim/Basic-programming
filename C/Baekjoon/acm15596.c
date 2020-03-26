#include <stdio.h>


long long sum(int *a, int n)
{
    long long total=0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        total += a[i];
    }
    return total;
}
