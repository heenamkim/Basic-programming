#include <stdio.h>

int main()
{
    int t;
    int apt[15][14] = {};
    int a, b;

    scanf("%d", &t);

    for (int i = 0; i <=14; i++){
        for (int j = 1; j <= 14; j++){
            if (i == 0){
                apt[i][j] = apt[i][j];
            }
            // else{
            // apt[i][j] += apt[i-1][j];
            // }
        }
    }
    for (int i = 0; i <= 14; i++){
        printf("%d", apt[0][i]);
    }
    // for (int i = 0; i < t; i++){
    //     scanf("%d", &a);
    //     scanf("%d", &b);
    //     printf("%d\n", apt[a][b]);
    // }
}
