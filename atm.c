#include <stdio.h>

int main() 
{
    int pin, i, correct_pin = 5678;

    printf("PIN must be correct\n");

    for (i = 1; i <= 3; i++) {
        printf("Enter your ATM PIN: ");
        scanf("%d", &pin);

        if (pin == correct_pin)
         {
            printf("\nCollect your cash\n");
            break;
        } 
        else if (i == 3) 
        {
            printf("\nATM has been blocked\n");
        } 
        else 
        {
            printf("\nIncorrect PIN. Please try again.\n");
        }
    }

    return 0;
}