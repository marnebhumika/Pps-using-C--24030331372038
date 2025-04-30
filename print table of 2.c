#include <stdio.h>

int main() {
    int i, num = 2, table;
    for (i = 1; i <= 10; i++) {
        table = num * i;
        printf("%d * %d = %d\n", num, i, table);
    }
    return 0;
}