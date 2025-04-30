#include <stdio.h>

int main()
{
    int length, breadth, area, perimeter;

    printf("Enter length of rectangle:\t");
    scanf("%d", &length);

    printf("Enter breadth of rectangle:\t");
    scanf("%d", &breadth);

    area = length * breadth;  // Corrected formula for area
    printf("\nArea is %d", area);

    perimeter = 2 * (length + breadth);
    printf("\nPerimeter is %d", perimeter);

    return 0;
}