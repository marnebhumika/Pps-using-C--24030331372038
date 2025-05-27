#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    // Ask for user input
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci series:\n");

        for (i = 0; i < n; i++) {
            if (i <= 1)
                next = i;
            else {
                next = first + second;
                first = second;
                second = next;
            }
            printf("%d ", next);
        }
    }

    return 0;
}