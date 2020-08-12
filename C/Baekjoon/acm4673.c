#include <stdio.h>

#define N 10000

int main()
{
    int arr[20001] = {0};
    int total = 0, n;

    for (int i = 0; i < N; i++) {
        arr[i] = i;
    }

    for(int i = 0; i < N; i++) {
        if (N <= 100) {
            total = i + (i%10) + (i/10);
        }
        else if (N <= 1000){
            total = i + (i%100) + (i/10);
        }
        else {
            total = i + (i%1000) + (i/10);
        }
        arr[total] = 0;
    }
    for (int i = 0; i < N; i++) {
        if(arr[i] != 0) {
            printf("%d ", arr[i]);
        }
    }
    // scanf("%d", &n);
    // total = n + (n%10) + (n/10);
    // printf("%d", total);

}
