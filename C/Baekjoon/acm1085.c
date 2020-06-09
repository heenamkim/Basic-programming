#include <stdio.h>

int main()
{

    int arr[4];
    int x,y,w,h;
    int min;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    min = x;
    arr[0] = x;
    arr[1] = y;
    arr[2] = w-x;
    arr[3] = h-y;

    for (int i = 0; i < 5; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    printf("%d", min);
}
