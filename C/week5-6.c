#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int you[3]={0}, player[3];
    int y,p;
    int deck[10]={0};
    //int Player[10]={'You','Player'};
    srand(time(0));

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++)
            you[j]= rand() % 10;
            deck[j]=
    }
    for (int k = 0; k < 3; k++)
        printf("%d\n",you[k]);

}
