#include <stdio.h>

int main()
{
    int i;
    int num[10]={0};
    double total=0;
    for ( i=0;i<10;i++){
        scanf("%d", &num[i]);
        total += num[i];
        if (num[i] == 0)
            break;
    }
    printf("Avg = %.2lf%\n", total / i);
}
