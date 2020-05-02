#include <stdio.h>
#include <string.h>

int main()
{
    int N, len = 0, num = 0;
    scanf("%d", &N);
    char word[N][100];
    char word2[26] = {0};

    for (int i = 0; i < N; i++){
        scanf("%s", word[i]);
    }
    for (int i = 0 ; i < N; i++){
        len = strlen(word[i]);
        for (int j = 0; j < len; j++){
            if (j+1 < len && (word[i][j] == word[i][j+1] || wo)
                num = word[i][j];
                word2[(num-97)]++;
        }
        for (int k = 0; k < 26; k ++){
            printf("%d\n", word2[k]);
        }
    }

}
