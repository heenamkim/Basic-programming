#include <stdio.h>
#include <string.h>

int main()
{
    char alp[100]={0};

    scanf("%s", &alp);

    while (strlen(alp) != 0)

        strlen(alp) /= 10;

        printf("%s\n",alp);
}
