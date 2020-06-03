#include <stdio.h>

int main()
{
    int t, f, n, apt[15][14];
    int people = 0;

    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &f, &n);
        for (int j = 0; j <= f; j++) {
            for (int k = 1; k <= n; k++) {
                people = 0;
                if (j == 0) {
                    apt[j][k] = k;
                }
                else {
                    for (int l = 1; l <= k; l++) {
                        people += apt[j-1][l];
                    }
                    apt[j][k] = people;
                }
            }
        }
        printf("%d\n", apt[f][n]);
    }
}
