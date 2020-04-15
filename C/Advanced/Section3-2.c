#include <stdio.h>

int main()
{ 
    int n1, n2, a, b;
    int total = 0;


    scanf("%d %d", &n1, &n2);
    a = n1 < n2 ? n1 : n2;
    b = n1 > n2 ? n1 : n2;

    for (int i = a; i <= b; i++){
        if ( i % 3 == 0 || i % 5 == 0){
            printf("%d out\n", i);
            continue;
        }
        total += i;
    }
    printf("%d", total);
}
