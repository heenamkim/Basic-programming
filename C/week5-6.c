#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int you[3]={0}, player[3];
    int y,p;
    int deck[13]={1,2,3,4,5,6,7,8,9,10,'J','Q','K'};
    //int Player[10]={'You','Player'};
    srand(time(0));

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++)
            you[j]= rand() % deck[13];
    }
    for (int k = 0; k < 3; k++)
        printf("%d\n",you[k]);

}
