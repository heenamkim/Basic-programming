#include <stdio.h>

#define DICE_SIMULATION 1
#define GAME_SHOW       2
#define HIGH_LOW_GAME   3
#define WORD_GAME       4
#define ABOUT           5
#define EXIT            0

int displayMainMenu();
void diceSimulation();
void gameShow();
void highLowGame();
void wordGame();
void about();

int main()
{
    int menu=1;
    while(menu!=0) {

        menu = displayMainMenu();
        switch(menu) {
            case DICE_SIMULATION:
                diceSimulation();
                break;
            case GAME_SHOW:
                gameShow();
                break;
            case HIGH_LOW_GAME:
                highLowGame();
                break;
            case WORD_GAME:
                wordGame();
                break;
            case ABOUT:
                about();
                break;
            case EXIT:
                break;
            default:
                printf("올바르지 않은 입력입니다\n");
        } // switch
    } //wile
} // main

int displayMainMenu()
{
    int menu;

    printf("===================\n");
    printf("GAME MENU\n");
    printf("___________________\n");
    printf("1.Dice Simulation\n");
    printf("2.Game show\n");
    printf("3.High Low Game\n");
    printf("4.Word Game\n");
    printf("5.About\n");
    printf("___________________\n");
    printf("0.Exit\n");
    printf("===================\n");
    scanf("%d",&menu);

    return menu;
}

void diceSimulation() {
    printf("1.Dice Simulation\n");
}

void gameShow() {
    printf("2.Game show\n");
}

void highLowGame() {
    printf("3.High Low Game\n");
}

void wordGame() {
    printf("4.Word Game\n");
}

void about() {
    printf("Sujong university\n");
    printf("somputher Engineering\n");
    printf("Created by heenam.k on 2020\n");
    printf("copyright(c) 2020y heenam.k\n");
}
