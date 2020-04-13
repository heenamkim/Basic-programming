#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int you[3], player[3];
    int card[13]={0};
    int y,p,r;
    srand(time(NULL));

    for (int i = 0; i < 6; i++){
        r = rand() % 13+1;
        if ( r != card[i])
            if (i < 3){
                card[i] = r;
                you[i] = r;
            }
            else{
                card[i] = r;
                player[i-3] = r;
            }
    }


    for (int k = 0; k < 3; k++){
        printf("%d ",you[k]);
        printf("%d ",player[k-3]);
    }

}
