#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = {0};
    char b[20] = {0};
    char c[20] = {0};
    char d[20] = {0};
    char word[80] = {0};

    char *alpArr[4] = {a, b, c, d};
    char *alp;

    for (int i = 0; i < 4; i++) {
        scanf("%s", alpArr[i]);
    }

    for (int i = 0; i < 4-1; i++) {
        for (int j = 0; j < (4-i)-1; j++) {
            if (strcmp (alpArr[j], alpArr[j+1]) > 0) {
                alp = alpArr[j];
                alpArr[j] = alpArr[j+1];
                alpArr[j+1] = alp;
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        strcat (word, alpArr[i]);
        word[strlen(word)] = ' ';
    }

    printf("%s", word);


}
