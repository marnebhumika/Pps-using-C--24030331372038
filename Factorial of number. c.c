#include <stdio.h>

int main() {
    int i, num, fact = 1; // Initialize fact to 1
    printf("Enter the number to find factorial of:\t");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}