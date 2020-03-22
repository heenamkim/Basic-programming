#include <stdio.h>

int main()
{
    int i;
    int total=0, num[10]={0};
    while (num != 0){
        scanf("%d", &num[i]);
        i++;
        if (num[i] == 0)
            break;
    }
    printf("Avg = %.2lf%\n", total / i);
}
