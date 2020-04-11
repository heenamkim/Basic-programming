#include <stdio.h>
#include <string.h>


struct Account
{
    char new_id[50];
    char new_pw[50];
};

int main()
{
    struct Account idpw[50];

    int num = 0;
    int i = 1, login = 0;
    int id_pw = 0;
    char log_id[10];
    char log_pw[10];
    strcpy (idpw[0].new_id, "admin");
    strcpy (idpw[0].new_pw, "root");

    printf("%s : %s\n", idpw[0].new_id, idpw[0].new_pw);
    while(1){

        printf("=====================\n");
        printf("1. Signed up\n2. Signed in\n0. exit\n");
        printf("=====================\n");

        scanf("%d", &num);

        if (num == 1){

            printf("ID = ");
            scanf("%s", &idpw[i].new_id);
            printf("PW = ");
            scanf("%s", &idpw[i].new_pw);
            printf("Joined Complete!\n");
            i++;
        }
        else if (num == 2){
            printf("ID = ");
            scanf("%s", &log_id);
            for (int j = 0; j < i; j++){
                login = 0;
                if (strcmp(log_id, idpw[j].new_id) == 0){
                    id_pw = j;
                    login = 1;
                    for (int z = 1; z < 6; z++){
                        if (z < 5) {
                            printf("PW = ");
                            scanf("%s", &log_pw);
                            if (strcmp(log_pw, idpw[id_pw].new_pw) == 0){
                                printf("Loged In Complete!\n");
                                break;
                            }
                            else
                                printf("Wrong password! Try %d/5\n", z);
                        }

                        else {
                            printf("Reset password! Input new\n");
                            printf("password\n");
                            printf("New PW =");
                            scanf("%s", idpw[id_pw].new_pw);
                            break;
                        }
                    }
                }
            }
            if ( login == 0)
                printf("There's no account. Plese join us!\n");
        }

        else if (num == 0){
            for (int j = 0; j < i; j++){
                printf("%s : %s\n", idpw[j].new_id, idpw[j].new_pw);
            }
            break;
        }
    }
}
