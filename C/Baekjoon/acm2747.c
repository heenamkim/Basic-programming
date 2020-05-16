#include <stdio.h>

int main()
{
    int n;
    int fibonacci[46];
    int total = 0;

    scanf("%d", &n);

    for (int i = 0; i <= 45; i++){
        if (i < 2){
            fibonacci[i] = i;
        }
        else{
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        }
    }
    printf("%d", fibonacci[n]);
}
