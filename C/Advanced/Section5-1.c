#include <stdio.h>

int main()
{
    char N;
    int count = 0;

    while(scanf("%c", &N) != EOF){
        if (N >= 'A' && N <= 'Z')
            printf("Upper case\n");
        else if (N >= 'a' && N <= 'z')
            printf("Lower case\n");
        else if (N >= '0' && N <= '9')
            printf("Arabic number\n");
        else
            printf("Special Character\n");
        fflush(stdin);
    }
    printf("END");
}
