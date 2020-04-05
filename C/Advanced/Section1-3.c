#include <stdio.h>

int main()
{
    int num1,num2;
    int total=0;
    scanf("%x %x", &num1, &num2);

    total = num1+num2;
    printf("octal number result : %o\n",total);
    printf("decimal number result : %d\n",total);
    printf("hexadecimal result : %x\n",total);
}
