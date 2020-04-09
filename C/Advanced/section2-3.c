#include <stdio.h>

int main()
{ // 문제2 3-1

    int A, B;

    scanf("%d %d", &A, &B);

    A > B ? printf("max = %d", A) : printf("max = %d", B);

}

int main()
{ // 문제2 3-2
    int A,B,C;

    scanf("%d %d %d", &A, &B, &C);

    A > B ? A > C ? printf("max = %d", A) : B : C;
    B > C ? printf("max = %d", B) : printf("max = %d", C);
}
