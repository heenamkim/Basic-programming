#include <stdio.h>

int main()
{
    int num[4]={0};
    int n1;

    for (int i = 0; i < 4; i++)
        scanf("%d", &num[i]);
    for (int j = 0; j < 4; j++){
        n1 = num[j];
        for (int k = 0; k < 4; k++){
            if (n1 < num [k]){
                n1 = num[k];
                num[k] = num[j];
                num[j] = n1;
            }
        }
    }
    for (int n = 0; n < 4; n++)
        printf("%d ",num[n]);
}
