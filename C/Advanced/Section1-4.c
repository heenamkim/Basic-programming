#include <stdio.h>

int main()
{ // 문제 4-1
    char alp;
    int count=0;

    while(1) {
        alp = getchar();
        if (alp == EOF)
            break;
        fflush(stdin);
        count += 1;


    }
    printf("%d",count);
}

int main()
{ // 문제 4-2
    int num;
    int total=0;

    while(num != EOF){
        scanf("%d",&num);
        total += num;

    }
    printf("%d",total);
}
