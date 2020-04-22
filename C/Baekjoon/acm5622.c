#include <stdio.h>
#include <string.h>

int main()
{

    char alp[15];
    int len = 0, total = 0;

    scanf("%s", alp);

    len = strlen(alp);
    for (int i = 0; i < len; i++){
        if (alp[i] == 'A' || alp[i] == 'B' || alp[i] == 'C')
            total += 3;
        else if (alp[i] == 'D' || alp[i] == 'E' || alp[i] == 'F')
            total += 4;
        else if (alp[i] == 'G' || alp[i] == 'H' || alp[i] == 'I')
            total += 5;
        else if (alp[i] == 'J' || alp[i] == 'K' || alp[i] == 'L')
            total += 6;
        else if (alp[i] == 'M' || alp[i] == 'N' || alp[i] == 'O')
            total += 7;
        else if (alp[i] == 'P' || alp[i] == 'Q' || alp[i] == 'R' || alp[i] == 'S')
            total += 8;
        else if (alp[i] == 'T' || alp[i] == 'U' || alp[i] == 'V')
            total += 9;
        else if (alp[i] == 'W' || alp[i] == 'X' || alp[i] == 'Y' || alp[i] == 'Z')
            total += 10;
    }
    printf("%d", total);
}
