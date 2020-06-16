#include<stdio.h>

int DicInt(int *num1, int *num2)
{
    int portion, rest;

    portion = *num1 / *num2;
    rest = *num1 % *num2;

    return rest;
}
int main()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);


    printf("몫: %d", rest);
}
