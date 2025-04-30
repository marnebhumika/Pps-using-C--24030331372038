#include <stdio.h>

int main() {
    int marks;

    printf("Enter Marks: ");
    scanf("%d", &marks);

    if (marks >= 40) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    printf("End of program.\n");
    return 0;
}