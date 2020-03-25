#include <stdio.h>

int main()
{
    int num[8];
    int as=0,de=0;
    for (int j = 0; j < 8; j++){
        scanf("%d", &num[j]);
    }

    for (int i = 0; i < 8; i++ ){
        if (num[i] != i+1)
            as = 1;
    }
    for (int k = 0; k < 8; k++){
        if (num[k] != 8 - k){
            de = 1;
        }


    }
    if (as == 0)
        printf("ascending");
    else if (de == 0)
        printf("descending");
    else
        printf("mixed");
}
