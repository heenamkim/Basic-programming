#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, v;
    double total;


    scanf("%lf %lf %lf", &a, &b, &v);

    total = (v/(a-b));

    printf("%lf", total);
}
