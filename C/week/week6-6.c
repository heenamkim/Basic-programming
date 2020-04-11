#include <stdio.h>

struct student
{
    char name[10];
    int python, c, basic;
};

int main()
{
    int num;
    double avg[50];

    scanf("%d", &num);
    struct student person[num];


    for (int i = 0; i < num; i++) {
        int total = 0;

        scanf("%s", &person[i].name);
        scanf("%d %d %d", &person[i].python, &person[i].c, &person[i].basic);
        total = person[i].python + person[i].c + person[i].basic;
        avg[i] = (double)total / 3;

    }

    for (int j = 0; j < num; j++){
    printf("%s\n",person[j].name);
    printf("%lf\n", avg[j]);
    }
}
