#include <stdio.h>

int main()
{
    int n, a;
    int count, count2 = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);

        count = 0;
        for (int j = 1; j <= a; j++) {
            if (a % j == 0) {
                count++;
            }
        }
        if (count == 2) {
            count2++;
        }
    }
    printf("%d", count2);
}
