#include <stdio.h>

int main()
{
    int N;
    int count = 1;
    while(N != count){

        N -= count;
        count++;
        if (N < count){
            count += 1;
            break;
        }


    }
    printf("%d", count);
}
