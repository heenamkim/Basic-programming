#include <stdio.h>

int getSum();

int main()
{
    int num[10]={0};
    int total=0;

    for (int i = 0; i < 10; i++){
        scanf("%d", &num[i]);
        if (num[i] == 0)
            break;
    }
    printf("Total = %d\n", getSum(num));
}

int getSum(int num[10])
{
    int total=0;
    for( int i = 0; i < 10; i++){
        if (num[i] != 0)
            total += num[i];
    }
    return total;
}
