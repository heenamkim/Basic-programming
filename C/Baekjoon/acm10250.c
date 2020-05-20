#include <stdio.h>

int main()
{
    int t;
    int h, w, n;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &h, &w, &n);
        if ( n % h == 0) {
            printf("%d\n", (h*100)+(n/h));
        }
        else {
            printf("%d\n", 100*(n%h)+(n/h+1));
        }
    }
}
