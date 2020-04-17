#include <stdio.h>

int main()
{
    int num , num1;
    int count = 0, len = 0;
    int total1 = 0, total2 = 0;

    scanf("%d", &num);
    num1 = num;

    while(num != 0){
        num /= 10;
        count++;
    }

    len = count/2;
    for (int i = 0; i < count; i++){
        if (len <= i){
            total1 += num1 % 10;
            num1 /= 10;
        }
        else{
            total2 += num1 % 10;
            num1 /= 10;
        }
    }
    if (total1 == total2)
        printf("LUCKY");
    else
        printf("READY");
}
