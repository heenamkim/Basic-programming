#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = {0};
    char b[20] = {0};
    char c[20] = {0};
    char d[20] = {0};
    char word[80] = {0};

    scanf("%s", a);
    scanf("%s", b);
    // scanf("%s", c);
    // scanf("%s", d);

    for (int i = 0; i < 20; i++){
        if(strncmp(a, b, i) != 0){
            if (a[i] < b[i]){
                strcat(word, b);
                if (a[i] < c[i])
                    strcat(word, c);
                
                    if (a[i] < d[i]){
                        strcat(word, a);
                        strcat(word, d);
                        break;
                    }
                    else{
                        strcat(word, b);
                else
                    strcat(word, c);
            }

            else{
                strcat(word, b);
                strcat(word, a);
                printf("%s", word);
                break;
            }
        }
    }

}
