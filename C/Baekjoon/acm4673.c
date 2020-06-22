#include <stdio.h>

int main()
{
    int a, b;
    int total = 0;
    int number = 0;

    for (int i = 1; i <= 10; i++) {
        total++;
        a = i % 10;
        b = i / 10;
        for (int j = 1; j <= i; j++) {
            if (j != i+a+b) {
                number = 1;
                total = j;
            }
        }
        if (number == 1) {
            printf("%d\n", total);
        }
    }
}
