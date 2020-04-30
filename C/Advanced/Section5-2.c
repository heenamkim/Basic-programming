#include <stdio.h>
#include <string.h>

int main()
{
    char word[256];
    int len = 0;

    gets(word);
    len = strlen(word);

    for (int i = 0; i < len; i++){

        if (word[i] == 32){
            word[i] = word[i];
        }
        else if (word[i] >= 'Z'){
            word[i] -= 32;
        }
        else if (word[i] <= 'z'){
            word[i] += 32;
        }
    }

    for (int i = 0; i < len; i++){
        printf("%c", word[i]);
    }



}
