#include<stdio.h>
#include<string.h>

int main()
{
    char words[100];
    char word;
    int total = 0;
    int len = 0;

    printf("대상 문자열 입력: ");
    scanf("%s", words);
    printf("세어 볼 문자 입력: ");
    scanf("%c", &word);

    len = strlen(words);

    for (int i = 0; i < len; i++) {
        if (words[i] == word) {
            total += 1;
        }
    }
    printf("%c의 개수 %d: ", word, total);


}
