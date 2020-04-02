#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int you[3]={0}, player[3]={0};
    int y,p,r=0;
    srand(time(NULL));

    for (int i = 0; i < 6; i++){
        again:;
        r = rand() % 13+1;
        if ( i < 3)
            if (r == you[i]){
                goto again;
                you[i] = r;
            }
        else
            if (r == you[i] && r == player[i]){
                goto again;
                player[i] = r;
            }
    }

    for (int k = 0; k < 3; k++){
        printf("%d\n",you[k]);
        printf("%d\n",player[k]);
    }
    return 0;
}
