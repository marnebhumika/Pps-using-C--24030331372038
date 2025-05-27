#include <stdio.h>

int main() {
    int i, num, Table;
    printf("Enter the number:\t");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++) {
        Table = num * i;
        printf("%d x %d = %d\n", num, i, Table);
    }
    return 0;
}