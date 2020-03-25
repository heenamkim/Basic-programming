#include <stdio.h>

int main()
{
    int A,B,C,D,P;
    int x_total=0;
    int y_total=0;

    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);
    scanf("%d",&P);

    x_total = A*P;
    if (C >= P)
        y_total = B;
    else if (C < P)
        y_total = B+D*((P - C));


    if (x_total > y_total)
        printf("%d", y_total);
    else if (x_total < y_total)
        printf("%d", x_total);

}
