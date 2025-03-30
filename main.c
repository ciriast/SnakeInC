#include <stdio.h>

int sumTwoNumbers() {
    int num1 = 20;
    int num2 = 30;

    return num1 + num2;
}

int main() {
    printf("Welcome to Snake made in C \n");

    printf("%d\n", sumTwoNumbers());

    for(int i = 1; i <= 10; ++i) {
        printf("%d\n", i);
    }

    return 0;
}
