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
    // superior row
    for (int i = 0; i < cols; ++i)
        putchar('#');
    
    putchar('\n');

    // interiors rows 
    for (int i = 0; i < rows; ++i) {
        // left border
        putchar('#');

        for (int j = 1; j < (cols - 1); ++j)
            putchar('.');

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

    printf("%d\n", sumTwoNumbers());

    for(int i = 1; i <= 10; ++i) {
        printf("%d\n", i);
    }
    
    draw_board(10, 10);
    
    struct position positions[5];

    for (int i = 0; i < 5; ++i) {
        positions[i].x = i + 10;
        positions[i].y = i + 20;

        printf("%d\n", positions[i].x);
        printf("%d\n", positions[i].y);
    }

    return 0;
}
