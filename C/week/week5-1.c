#include <stdio.h>

int getMax();
int getMin();

int main()
{
    int max=0;
    int num[10]={0};
    for (int i=0;i<10;i++){
        scanf("%d", &num[i]);
        if (num[i] == 0)
            break;
    }
    printf("max = %d\n", getMax(num));
    printf("min = %d\n", getMin(num));
}

int getMax(int num[10])
{
    int max;
    max=num[0];
    for (int i = 0; i < 10; i++){
        if (max < num[i])
            max = num[i];
    }
    return max;
}

int getMin(int num[10])
{
    int min;
    min=num[0];
    for (int i = 0; i < 10; i++){
        if (min > num[i])
            if (num[i] != 0)
            min = num[i];
    }
    return min;
}
