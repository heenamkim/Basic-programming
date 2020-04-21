#include <stdio.h>

int main()
{

    int num[5] = {0};
    int max = 0;

    for (int i = 0; i < 5; i++)
        scanf("%d", &num[i]);

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (num[i] < num[j]){
                max = num[i];
                num[i] = num[j];
                num[j] = max;
            }
        }
    }
    for (int i = 0; i < 5; i++){
        printf("%d\n", num[i]);
    }
}
