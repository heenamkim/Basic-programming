#include <stdio.h>

int main()
{
    int num[5];
    int total=0;

    for (int i = 0; i < 5; i++)
        scanf("%d", &num[i]);

    for (int j = 0; j < 5; j++){
        if (num[j] < 40)
            total += 40;
        else if (num[j] >= 40)
            total += num[j];
    }
    printf("%d", total/5);
}
