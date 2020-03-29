#include <stdio.h>

int main()
{
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int x,y;
    int total=0,day=0;

    scanf("%d %d", &x, &y);

    for (int i = 0; x-1 > i; i++)

        total += month[i];

    day = (total + y) % 7 ;


    if (day == 0)
        printf("SUN");
    else if(day == 1)
        printf("MON");
    else if (day == 2)
        printf("TUE");
    else if (day == 3)
        printf("WED");
    else if (day == 4)
        printf("THU");
    else if (day == 5)
        printf("FRI");
    else if (day == 6)
        printf("SAT");

}
