#include <stdio.h>

int main()
{
    int people, num;
    int not_cute = 0, cute = 0;

    scanf("%d", &people);
    for (int i = 0; i < people; i++){
        scanf("%d", &num);
        if (num == 0)
            not_cute++;
        else if (num == 1)
            cute++;
    }
    if (not_cute > cute)
        printf("Junhee is not cute!");
    else
        printf("Junhee is cute!");

}
