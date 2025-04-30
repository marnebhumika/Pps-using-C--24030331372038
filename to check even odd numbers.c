#include <stdio.h>

int main()
{
    int number, remainder;
    printf("Enter number to check:\t");
    scanf("%d", &number);
    remainder = number % 2;
    if (remainder == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}