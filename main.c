#include <stdio.h>

int sumTwoNumbers() {
    int num1 = 20;
    int num2 = 30;

    return num1 + num2;
}

void draw_board() {
    for(int i = 0; i < 4; ++i) {
        printf("######");
    }
}

int main() {
    printf("Welcome to Snake made in C \n");

    printf("%d\n", sumTwoNumbers());

    for(int i = 1; i <= 10; ++i) {
        printf("%d\n", i);
    }
    
    draw_board();

    return 0;
}
