#include <stdio.h>

int main()
{
    int a,b,c;
    int n;
    int num[10]={0};
    int total=0;
    scanf("%d %d %d", &a, &b, &c);
    total = a*b*c;

    while(total != 0)
    {
        total /= 10;
        n = total % 10;
        num[n] += 1;
    }

    for (int j = 0; j < 10; j++){
        printf("%d\n", num[j]);
    }

}
