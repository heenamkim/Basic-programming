#include <stdio.h>
#include <string.h>

int main()
{

    int T, R;
    int len = 0;
    char S[20] = {0};

    scanf("%d", &T);

    for (int i = 0; i < T; i++){
        scanf("%d %s", &R, S);
        len = strlen(S);
        for (int j = 0; j < len; j++){
            for (int k = 0; k < R; k++){
                printf("%c", S[j]);
            }
        }
        printf("\n");
    }
}
