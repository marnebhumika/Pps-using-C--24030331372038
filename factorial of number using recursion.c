#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter the number to find factorial of: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial not defined for negative numbers.\n");
    else
        printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}