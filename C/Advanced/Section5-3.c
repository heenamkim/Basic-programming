#include <stdio.h>
#include <string.h>

int main()
{
    char word[5][20];
    char max[20];

    for (int i = 0; i < 5; i++){
        scanf("%s",word[i]);
    }

    strcpy(max, word[0]);
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (strlen(word[i]) < strlen(word[j])){
                strcpy(max, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], max);
            }
        }
    }

    for (int i = 0; i < 5; i++){
        printf("%s\n", word[i]);
    }

}
