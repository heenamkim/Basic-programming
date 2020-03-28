#include <stdio.h>

int main()
{
    int A,B,T,comma;

    scanf("%d",&T);

    for (int i = 0; i < T; i++){

        scanf("%d %c %d",&A,&comma,&B);
        printf("%d\n", A+B);
    }

}
