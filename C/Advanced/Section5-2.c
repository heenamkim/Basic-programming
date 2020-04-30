#include <stdio.h>
#include <string.h>

int main()
{
    char word[256];
    int len = 0;

    gets(word);
    len = strlen(word);

    for (int i = 0; i < len; i++){
        if (i <= 'A'){
            word[i] += 32;
        }
        else if (i <= 'a'){
            word[i] -= 32;
        }
    }

    for (int i = 0; i < len; i++){
        printf("%c", word[i]);
    }



}
