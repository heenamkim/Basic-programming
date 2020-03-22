#include <stdio.h>

int getMax();
int getMin();

int main()
{
    int max;
    int num[10]={0};
    for (int i=0;i<10;i++){
        scanf("%d", &num[i]);
        if (num[i] == 0)
            break;
    }
    getMax();
}
int getMax()
{
    int max;
    int num[10]={0};
    max = num[0];
    for (int i = 0; i < 10; i++){
        if (max < num[i])
            max = num[i];
    }
    printf("mix = %d",max);
}
