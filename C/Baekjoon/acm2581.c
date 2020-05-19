#include <stdio.h>

int main()
{
    int n, m;
    int count, count2 = 0;
    int min = 0, total = 0;

    scanf("%d %d", &n, &m);

    for (int i = n; i <= m; i++) {
        count = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 2) {
            count2++;
            total += i;
            if (count2 == 1) {
                min = i;
            }
        }
    }
    if (count2 == 0) {
        printf("-1");
    }
    else {
        printf("%d\n", total);
        printf("%d\n", min);
    }
}
