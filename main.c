#include <stdio.h>

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

    return 0;
}
