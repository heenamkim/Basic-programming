#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int alp[26]={0};
    scanf("%s", &s);

    for (int i = 0; i < 26; i++){
        alp[i] = -1;
    }

    for (int j = 0; j < strlen(s); j++){
        int count = -1;
        for (int i = 'a'; i <= 'z'; i++){
            count += 1;
            if ( i == s[j])
                if (alp[count] == -1)
                    alp[count] = j;

        }
    }
    for (int k = 0; k < 26; k++)
        printf("%d\n", alp[k]);
}
