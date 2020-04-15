#include <stdio.h>

int main()
{ // 문제1 3-3
    int n;
    int add = 0, even = 0;

    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        if (i % 2 == 0)
            add += i;
        else
            even += i;
    }
    printf("even = %d\n", even);
    printf("add = %d\n", add);
}

int main()
{ // 문제2 3-3
    int n;
    int i = 0, before = 0, after = 0;

    scanf("%d", &n);

    while(1){
        i++;
        before += i;
        after += i;
        if ( before > n){
            before -= i;
            break;
        }
    }
    printf("%d\n", i);
    printf("before = %d\n", before);
    printf("after = %d\n", after);

}
