#include <stdio.h>
#include <string.h>

int main()
{
    int num, total, n;
    char ox[80];
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        total=0;
        n=1;
        scanf("%s", &ox);
    for (int j = 0; j < strlen(ox); j++){
        if ( ox[j] == 'O'){
            total += n;
            n++;
        }
        else if ( ox[j] == 'X'){
            n = 1;
        }
    }
    printf("%d\n", total);
    }

}
