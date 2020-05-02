#include <stdio.h>
#include <string.h>

int main()
{
    char word[1000003] = {0};
    int len = 0, count = 0;


    gets(word);
    len = strlen(word);
    for (int i = 0; i < len; i++){
        if (word[i] == ' ' && word[i+1] != '\n'){
            count ++;
        }
    }
    if (word[0] == ' ' || word[0] == '\n'){
        count --;
    }
    if(word[len-1] == ' '){
        count --;
    }

    printf("%d\n", count+1);

}
