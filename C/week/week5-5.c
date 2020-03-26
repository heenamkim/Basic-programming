#include <stdio.h>

int main()
{
    int num[10]={0,1,2,3,4,5,6,7,8,9};
    int i,v;

    while (1){

        printf("intdex = ");
        scanf("%d", &i);
        if ( i == -1 )
            break;
        printf("value = ");
        scanf("%d", &v);
        num[i] = v;
    }
    for (int j =0; j < 10; j++){
        printf("%d,", num[j]);
    }
}
