#include <stdio.h>

int main()
{

    int min, man;
    int min_total=0, man_total=0;

    for (int i = 0; i < 4; i++){
        scanf("%d", &min);
        min_total += min;
    }
    for (int i = 0; i < 4; i++){
        scanf("%d", &man);
        man_total += man;
    }
    if (min_total >= man_total)
        printf("%d", min_total);
    else
        printf("%d", man_total);
}
