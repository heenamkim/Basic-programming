#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int total=0;
    int count=0;
    int my_door, prize_door, another_door, new_door;

    srand(time(0));
    for (int i = 0; i < 100; i++){
        prize_door = rand() % 3;
        my_door = rand() % 3;
        if (prize_door == my_door)
            count++;
    }
    for (int i = 0; i < 100; i++){
        prize_door = rand() % 3;
        my_door = rand() % 3;
        while (1) {
            another_door = rand() % 3;
            new_door = rand() % 3;
            if (prize_door != another_door && my_door != another_door){
                if (my_door != new_door && another_door != new_door)
                    break;
            }
        }
        if (prize_door == new_door)
            count++;
    }
    printf("%d%%", count);
    return 0;
}
