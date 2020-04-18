#include <stdio.h>
#include <string.h>


int main()
{
    char sentence[250]={0};
    char alp;
    int len;

    while(1){
        int count = 0;
        scanf("%c", &alp);
        if (alp == '#')
            break;
        scanf("%[^\n]s", sentence); //수정
        len = strlen(sentence);
        for (int i = 0; i < len; i++){
            if (alp == sentence[i] || alp == sentence[i]+32)
                count++;
        }
        fflush(stdin);
        printf("%c %d\n", alp, count);
    }
}
