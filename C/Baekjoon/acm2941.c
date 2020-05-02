#include <stdio.h>
#include <string.h>

int main()
{
    char word[105];
    int len, count = 0;

    scanf("%s", word);

    len = strlen(word);
    for (int i = 0; i < len; i++){
        if (word[i] == 'c') {
            if (i+1 < len && (word[i+1] == '-' || word[i+1] == '='))
                i++;
            count++;
        }
        else if (word[i] == 'd') {
            if (i+1 < len && word[i+1] == '-')
                i++;
            else if (i+2 < len && word[i+1] == 'z' && word[i+2] == '=')
                i+=2;
            count++;
        }
        else if (word[i] == 'l'){
            if (i+1 < len && word[i+1] == 'j')
                i++;
            count++;
        }
        else if (word[i] == 'n'){
            if (i+1 < len && word[i+1] == 'j')
                i++;
            count++;
        }
        else if (word[i] == 's'){
            if (i+1 < len && word[i+1] == '=')
                i++;
            count++;
        }
        else if (word[i] == 'z'){
            if (i+1 < len && word[i+1] == '=')
                i++;
            count++;
        }
        else{
            count++;
        }
    }
    printf("%d", count);
}
