#include <stdio.h>

int main()
{
    int people;
    scanf("%d",&people);
    int num[people];
    double total = 0;
    for (int i = 0; i < people; i++){
        scanf("%d", &num[i]);
        total += num[i];
    }
    printf("Avg = %.2lf%\n", total / people);
}
