#include <stdio.h>

int main()
{
    int num;
    int car[5];
    int count=0;
    scanf("%d", &num);

    for (int i = 0; i < 5; i++){
        scanf("%d", &car[i]);
    }
    for (int j = 0; j < 5; j++){
        if (num == car[j])
            count++;
    }
    printf("%d", count);
}
