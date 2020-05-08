#include <stdio.h>
#define MIN  1
#define ADD  0



int main(void)
{
    int num1, num2;
    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);

    #if ADD
        printf("%d + %d = %d", num1, num2, num1+num2);
    #endif

    #if MIN
        printf("%d - %d = %d", num1, num2, num1-num2);
    #endif

        return 0;



}
