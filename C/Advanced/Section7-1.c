#include <stdio.h>

void SortArr (int * arr, int num);
void ReadAndSortPrint (int number);

int main(void)
{
    int num;
    fputs("입력할 정수의 개수: ", stdout);
    scanf("%d", &num);

    ReadAndSortPrint(num);
    return 0;
}

void SortArr (int * arr, int num)
{
    int temp;

    for (int i = 0; i < num-1; i++) {
        for (int j = 0; j < (num-i)-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void ReadAndSortPrint(int number)
{
    int arr[number];

    for (int i = 0; i < number; i++) {
        printf("%d 번째 입력: ", i+1);
        scanf("%d", &arr[i]);
    }
    SortArr(arr, number);

    puts("입력된 숫자의 정렬된 출력");
    for (int i = 0; i < number; i++)
        printf("%d", arr[i]);
    printf("\n");
}
