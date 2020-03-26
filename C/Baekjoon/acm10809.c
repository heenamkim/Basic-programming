#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int alp[26];
    scanf("%s", &s);

    for (int j = 0; j < strlen(s); j++){
        for (int i = 'a'; i <= 'z'; i++){
            if ( i == s[j])
                printf("%c %d\n", i, j);
        }
    }
}
