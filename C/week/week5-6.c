#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int you[3]={0}, player[3]={0};
    int card[13]={0};
    int y,p,r;
    srand(time(NULL));

    for (int i = 0; i < 6; i++){
        r = rand() % 13+1;
        if (r != card[r]){
            if (i < 3){
                you[i] = r;
                card[r] = r;
            }
            else if (i >= 3){
                player[i-3] = r;
                card[r] = r;
            }
        }
    }

    for (int k = 0; k < 3; k++){
        printf("%d ",you[k]);
        printf("%d ",player[k]);
    }

}
