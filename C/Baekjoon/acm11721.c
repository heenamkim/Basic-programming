#include <stdio.h>
#include <string.h>

int main()
{
    char alp[100]={0};

    scanf("%s", &alp);
    printf("%c", alp[0]);
    for (int i = 1; i < strlen(alp); i++){
        if (i % 10 == 0)
            printf("\n%c", alp[i]);
        else
            printf("%c", alp[i]);
    }

}
