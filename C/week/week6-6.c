#include <stdio.h>

struct student
{
    char name[10];
    int python, c, basic;
};

int main()
{
    int num;
    double avg[50]s;

    scanf("%d", &num);
    struct student person[num];
    struct student subject[3];

    for (int i = 0; i < num; i++) {
        int total = 0;

        scanf("%s", &person[i].name);
        scanf("%d %d %d", &subject[i].python, &subject[i].c, &subject[i].basic);
        total = subject[i].python + subject[i].c + subject[i].basic;
        avg[i] = (double)total / 3;

    }

    for (int j = 0; j < num; j++){
    printf("%s\n",person[j].name);
    printf("%lf\n", avg[j]);
    }
}
