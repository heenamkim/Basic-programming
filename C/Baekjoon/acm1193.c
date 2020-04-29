#include <stdio.h>

int main()
{
    int N;
    int count = 1;
    int a = 0, b = 0;

    scanf("%d", &N);

    while(1) {

        if (N <= 0){
            N += count-1;
            break;
        }
        N -= count;
        count++;
    }

    if (count % 2 == 0){
        a = count - N;
        b = N;
    }
    else{
        a = N;
        b = count - N;

    }
    printf("%d/%d", a, b);
}
