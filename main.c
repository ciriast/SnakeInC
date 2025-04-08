#include <stdio.h>

int sumTwoNumbers() {
    int num1 = 20;
    int num2 = 30;

    return num1 + num2;
}

void draw_board(int x, int y) {

    for(int i = 0; i < x; ++i) {
        for(int yndex = 0; yndex < y; ++yndex) {
            char characterToUse = '#';
            
            if ((yndex != 0 && y - (yndex + 1) != 0) && (i != 0)) {
                characterToUse = '.';
            }

            if (x - (i + 1) == 0)
                characterToUse = '#';

            printf("%c", characterToUse);

            if (y - (yndex + 1) == 0) {
                printf("\n");
            }
        }
    }
}

int main() {
    printf("Welcome to Snake made in C \n");

    printf("%d\n", sumTwoNumbers());

    for(int i = 1; i <= 10; ++i) {
        printf("%d\n", i);
    }
    
    draw_board(5, 5);

    return 0;
}
