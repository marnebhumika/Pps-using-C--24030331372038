#include <stdio.h>

int main() {
    int number1, number2;

    printf("Enter number 1: ");
    scanf("%d", &number1);

    printf("Enter number 2: ");
    scanf("%d", &number2);

    if (number1 > number2) {
        printf("Number 1 is largest.\n");
    } else {
        printf("Number 2 is largest.\n");
    }

    return 0;
}