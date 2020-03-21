#include <stdio.h>
#include <math.h>


int main()
{
    int num,count=0;
    int num1,j=0,total=0, tmp,num2=0;
    scanf("%d", &num);
    num1 = num;

    while(num != 0){
        num = num/10;
        count++;
    }

    for (int i = count-1; i >= 0; i-- ){

        tmp = (int)round(pow(10,i));
        num2 = num1 / tmp;
        total += num2 * round(pow(10,j++));
        num1 = num1 % tmp;
    }
    printf("%d",total);
}
