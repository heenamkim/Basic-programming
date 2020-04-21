#include <stdio.h>

int main()
{ // 문제1 4-1

    int num;

    printf("add = 1, even = 2 : ");
    scanf("%d", &num);

    if (num != 1 && num != 2){
        printf("only 1 or 2\n");
    }
    for (int i = 2 ; i <= 9; i++){
        for (int j = 1; j <= 9; j++){
            if (num == 1){
                if (i % 2 == 1)
                    printf("%d * %d = %d\n", i, j , i*j);
            }
            else if (num == 2){
                if (i % 2 == 0)
                    printf("%d * %d = %d\n", i, j, i*j);
            }
        }
    }
}

int main()
{ // 문제2 4-1

    int n;

    scanf("%d", &n);
    for (int a = 0; a <= 100; a++){
        for (int b = 0; b <= 100; b++){
            for (int c = 0; c <= 100; c++){
                if (a * b - c == n)
                    printf("%d * %d - %d = %d\n", a, b, c, n);
            }
        }
    }

}
