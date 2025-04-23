#include <stdio.h>

const int snake_position_x = 5;
const int snake_position_y = 1;

struct position {
    int x;
    int y;
};

int sumTwoNumbers() {
    int num1 = 20;
    int num2 = 30;

    return num1 + num2;
}

void increase_x(struct position* snake_position) {
    snake_position->x += 1;
}

void increase_y(struct position* snake_position) {
    snake_position->y += 1;
}

struct position snake_global_position = { snake_position_x, snake_position_y };

void draw_board(int rows, int cols) {

    // superior row
    for (int i = 0; i < cols; ++i)
        putchar('#');
    
    putchar('\n');

    // interiors rows 
    for (int i = 0; i < rows; ++i) {
        // left border
        putchar('#');

        int isSnakeInX = (i + 1) - snake_global_position.x == 0;

        for (int j = 1; j < (cols - 1); ++j) {
            char charToDraw = '.';
            
            if (isSnakeInX == 1 && j == snake_global_position.y)
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

void start_game() {
    while(1) {
        draw_board(10, 10);
    }
}

int main() {
    printf("Welcome to Snake made in C \n");
    
    start_game();
    return 0;
}
