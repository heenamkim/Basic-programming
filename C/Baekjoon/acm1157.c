#include <stdio.h>
#include <string.h>

int main()
{
    char n[1000000] = {0};
    int y[30] = {0};
    int max = 0, a = 0;
    int total_max = 0;
    scanf("%s", &n);
    
    int len = strlen(n);
    for (int i = 0 ; i < len; i++){
        int count=0;
        for (int j = 'A'; j <= 'z'; j++){
            count++;
            if (j == n[i])
                if (count > 30){
                    count -= 32;
                    y[count] += 1;
                }
                else
                    y[count] += 1;
        }
    }
    max = y[0];
    for (int k = 0; k < 30; k++){
        if (max < y[k]){
            max = y[k];
            total_max = k;
        }
    }
    for (int z = 0; z < 30; z++){
        if (max == y[z])
            a += 1;
    }
    if (a == 1)
        printf("%c",total_max+64);
    else if(a >= 2)
        printf("?");

}
