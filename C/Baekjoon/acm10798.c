#include <stdio.h>
#include <string.h>

int main()
{
    char word[5][15]={0};
    int len = 0, max = 0;


    for (int j = 0; j < 5; j++){
        scanf("%s", &word[j]);
        if (strlen(word[j]) > max)
            max = strlen(word[j]);
    }

    for (int k = 0; k < max; k++){
        for (int i = 0; i < 5; i++){
            if (word[i][k] != '\0')
                printf("%c", word[i][k]);
        }
    }
}
