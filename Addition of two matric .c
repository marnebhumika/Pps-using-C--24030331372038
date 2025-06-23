#include <stdio.h>

int main()
{
    int a[3][3] = { {1, 2, 4}, {3, 4, 2}, {5, 1, 3} };
    int b[3][3] = { {4, 3, 2}, {2, 4, 2}, {1, 4, 3} };
    int i, j, c[3][3];

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}