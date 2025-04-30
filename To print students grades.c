#include <stdio.h>

int main()
{
    int marks;
    printf("Enter Marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Excellent grade");
    }
    else if (marks >= 80)
    {
        printf("A Grade");
    }
    else if (marks >= 70)
    {
        printf("B Grade");
    }
    else if (marks >= 60)
    {
        printf("C Grade");
    }
    else if (marks >= 50)
    {
        printf("D Grade");
    }
    else if (marks >= 40)
    {
        printf("E Grade");
    }
    else
    {
        printf("FAIL");
    }

    return 0;
}