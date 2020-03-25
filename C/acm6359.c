#include <stdio.h>

int main()
{
    int T,num;
    scanf("%d", &T);

    for (int i = 0; i < T; i++){
        int total=0;
        int n[101]={0};
        scanf("%d", &num);
        for (int j = 1; j <= num; j++){
            for (int k = 1; k <= num; k++){
                if (k % j == 0)
                //printf("j =%d k = %d k%j= %d\n",j,k,k%j);
                    if (n[k] == 1)
                       n[k] = 0;
                    else
                        n[k] = 1;
            }
        }
    for (int o = 0; o <= num; o++){
        total += n[o];
    }
    printf("%d\n", total);
    }
}
