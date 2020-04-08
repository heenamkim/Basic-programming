#include <stdio.h>

int main()
{
    int project[30]={0};
    int n;


    for (int i = 0; i < 28; i++){
        int num = 0;
        scanf("%d", &n);
        project[n-1] = n;
    }
    for (int j = 0 ; j < 30; j++){
        if ( project[j] == 0)
            printf("%d\n", j+1);
    }

}
