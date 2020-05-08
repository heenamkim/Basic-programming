#include <stdio.h>

int main(void)
{

    FILE * data = fopen("./date.txt","wt");
    fputs("123456789", data);
    fclose(data);

    data = fopen("./date.txt", "rt");

    fseek(data, -2, SEEK_END);
    putchar(fgetc(data));

    fseek(data, 2, SEEK_SET);
    putchar(fgetc(data));

    fseek(data, 2, SEEK_CUR);
    putchar(fgetc(data));

    fclose(data);
    return 0;
}
