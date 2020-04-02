#include <stdio.h>

int main()
{
    int n1, n2;
    int k;

    scanf("%d %d",&n1 ,&n2);
    int n[n1][n2];

    for (int i = 0; i < n1; i++){
        for (int j = 0; j < n2; j++)
            scanf("%d", &n[i][j]);
    }
    scanf("%d", &k);
    for (int o = 0; o < k; o++){
        int a = 0, b = 0, c = 0, d = 0;
        int total = 0;
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        scanf("%d", &d);

    for (int j = a-1; j < c; j++)
        for (int z = b-1; z < d; z++)
            total += n[j][z];


    printf("%d\n", total);
    }


}
