#include <stdio.h>

struct position {
    int x;
    int y;
};

int sumTwoNumbers() {
    int num1 = 20;
    int num2 = 30;

    return num1 + num2;
}

void draw_board(int rows, int cols) {
    struct position snakePosition;
    snakePosition.x = 2;
    snakePosition.y = 2;

    // superior row
    for (int i = 0; i < cols; ++i)
        putchar('#');
    
    putchar('\n');

    // interiors rows 
    for (int i = 0; i < rows; ++i) {
        // left border
        putchar('#');

        int isSnakeInX = (i + 1) - snakePosition.x == 0;

        for (int j = 1; j < (cols - 1); ++j) {
            char charToDraw = '.';
            
            if (isSnakeInX == 1 && j == snakePosition.y)
                charToDraw = 'O';

            putchar(charToDraw);
        }

        // right border
        putchar('#');
        putchar('\n');
    }

    // inferior row
    for (int i = 0; i < cols; ++i)
        putchar('#');

    putchar('\n');
}

int main() {
    printf("Welcome to Snake made in C \n");

    draw_board(10, 10);

    return 0;
}
