#include <stdio.h>

int main()
{
    int s[4];
    int total=0;


    for (int i = 0; i < 4; i++){
        scanf("%d", &s[i]);
        total += s[i];
    }
    printf("%d\n",total/60);
    printf("%d\n",total%60);


}
