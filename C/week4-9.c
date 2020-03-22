#include <stdio.h>

int main()
{
    int player[5]={0};
    int people,max;
    printf("How many people (2~5) >>");
    scanf("%d",&people);

    for (int i = 0; i < 2; i++){
        printf("Round %d\n",i+1);
        for (int k = 0; k < people; k++){
            printf("Turn >> Player %d\n", k+1);
            for (int j = 0; j < 3; j++){
                int a;
                char b;
                scanf("%d %c", &a, &b);
                if (b == 'n')
                    player[k] += a;
                else if (b == 'd')
                    player[k] += 2*a;
                else if (b == 't')
                    player[k] += 3*a;
            }
        }
    }
    int maxindex=0;
    max = player[0];
    for (int i = 0; i < people; i ++){
        if (max < player[i])
            max = player[i];
        maxindex = i+1;
    }
    printf("Player %d Win!\n", maxindex);
    printf("Total Score = %d\n", max);
}
