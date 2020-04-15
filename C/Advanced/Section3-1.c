#include <stdio.h>

int main()
{ // 문제1 3-1
    int n;
    int total = 0;

    scanf("%d", &n);

    while (1){
        if(n <= 0)
            scanf("%d", &n);

        else {
            for (int i = 0; i <= n; i++)
                total += i;
                printf("%d", total);
                break;
        }
    }
}

int main()
{ // 문제2 3-1
    int n1, n2, a, b;
    int total = 0;


    scanf("%d %d", &n1, &n2);
    a = n1 < n2 ? n1 : n2;
    b = n1 > n2 ? n1 : n2;

    for (int i = a; i <= b; i++){
        total += i;
    }
    printf("%d", total);
}
