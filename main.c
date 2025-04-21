#include <stdio.h>

int snake_position_x = 5;
int snake_position_y = 5;

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

struct position snake_global_position;
snake_global_position.x = snake_position_x;
snake_global_position.y = snake_position_y;

void start_game() {
    while(1) {
    }
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

    struct position snake_position = {.x = 5, .y = 5};
    printf("snake initial position in x: %d\n", snake_position.x);
    printf("snake initial position in y: %d\n", snake_position.y);

    increase_x(&snake_position);
    increase_y(&snake_position);

    printf("new snake position in x: %d\n", snake_position.x);
    printf("new snake position in y: %d\n", snake_position.y);

    return 0;
}
