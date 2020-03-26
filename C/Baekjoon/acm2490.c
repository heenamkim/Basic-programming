#include <stdio.h>

int main()
{
    int num[4];

    for (int i = 0; i < 3; i++){
        int total=0;
        for (int j = 0; j < 4; j++){
            scanf("%d", &num[j]);
            total += num[j];
        }
        if (total == 4)
            printf("E\n");
        else if (total == 3)
            printf("A\n");
        else if (total == 2)
            printf("B\n");
        else if (total == 1)
            printf("C\n");
        else if (total == 0)
            printf("D\n");
    }
}
