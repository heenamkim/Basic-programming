#include <stdio.h>

int main()
{

    char num[8] = {0};
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        int alp_total = 0, num_total = 0, total = 0;
        scanf ("%s", &num);
        alp_total = (num[0]-'A')*26*26+(num[1]-'A')*26+(num[2]-'A')*1;
        num_total = (num[4]-48)*1000+(num[5]-48)*100+(num[6]-48)*10+(num[7]-48)*1;
        if (alp_total < num_total)
            total = -(alp_total - num_total);
        else
            total = alp_total - num_total;
        if (total <= 100)
            printf("nice\n");
        else
            printf("not nice\n");

    }
}
