#include <stdio.h>

int main()
{
    int num[10];
    int rem[42]={0};
    int count=0;

    for (int i = 0; i < 10; i++){
        scanf("%d", &num[i]);
        num[i] = num[i]%42;

    for (int j = 0; j < 42; j++)
        if (num[i] == j)
            rem[j] += 1;
    }
    for (int k = 0; k < 42; k++){
        if (rem[k] != 0)
            count++;
    }
    printf("%d",count);

}
