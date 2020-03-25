#include <stdio.h>
#include <string.h>
//{'a','b','c','d','e','f','g','h','i','j','k','l','n','m','o','p','q','r','s','t','u','v','w','x','y','z'}
int main()
{
    char s[100];
    int alp[30];
    scanf("%s", &s);

    for (int i = 'a'; i < 'z'; i++){
        for (int j = 0; j < strlen(s); j++){
            if (i == s[j]){
                alp[i] = j;
            printf("alp = %c, s =%d\n",alp[i],j);
            }
        }
    }
    for (int k = 0; k <30; k++)
        printf("%d",alp[k]);

}
