#include <stdio.h>
#include <string.h>

int main()
{
    char word[1000005] = {0};
    int len = 0, count = 0;


    gets(word);
    len = strlen(word);
    for (int i = 0; i < len; i++){
        for (int j = 'A'; j < 'z'; j++){
            if (word[i] == j){
                word[i] = 1;
            }
        }
    }

    for (int i = 0; i < len; i++){
        if(word[i] == 1 && word[i+1] == 32 || word[i] == 1 && word[i+1] == '\0'){
            count++;
        }
    }
    printf("%d", count);

}
