#include<stdio.h>

int DicInt(int *a, int *b);

int main()
{
    int quo = 0, rem = 0, fail;

    fail = DicInt(&quo, &rem);
    if (fail == 1) {
        printf("몫: %d, 나머지: %d", quo, rem);
    }
    else {
        printf("오류 발생!!");
    }
}

int DicInt(int *a, int *b)
{
    int num1 = 0, num2 = 0, result = 0;;

    scanf("%d %d", &num1, &num2);
    if (num2 == 0) {
        result = -256;
    }
    else {
        *a = num1 / num2;
        *b = num1 % num2;
        result = 1;
    }
    return result;
}
