#include <stdio.h>

int main()
{
    int N, i = 0, min = 0, max = 0;
    int num[10] = {0};
    scanf("%d", &N);


    for (int a = 0; a < 10; a++){
        for (int b = 0; b < 10; b++){
            for (int c = 0; c < 10; c++){
                if ((a*100)+(b*10)+c+a+b+c == N){
                    num[i] = (a*100)+(b*10)+c;
                    i++;
                }
            }
        }
    }
    if (i == 0){
        printf("0");
    }
    else {
        min = num[0];
        for (int j = 0; j < 10; j++){
            if (num[j] != 0)
                if (min > num[j])
                    min = num[j];
        }
        printf("%d", min);
    }

}
