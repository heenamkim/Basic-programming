#include <stdio.h>
#include <string.h>

int main()
{
    int num, two = 0, count = 0, total[10] = {0};
    scanf("%d", &num);

    while(1){
    two = num % 2;
    total[count] = two;
    count++;
    num = num / 2;
        if (num == 0)
            break;
    }
    for (int i = count-1; i >= 0; i-- ){
        printf("%d", total[i]);
    }
}
