#include <stdio.h>

int main()
{
    int L,A,B,C,D;
    int count=0;

    scanf("%d", &L);
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    while(1)
    {
        if ( A > 0 || B > 0){
            A -= C;
            B -= D;
            count++;
        }
        else if (A <= 0 || B <= 0){
            printf("%d",L-count);
            break;
        }

    }
}
