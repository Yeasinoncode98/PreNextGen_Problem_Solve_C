#include <stdio.h>
int main()
{

    int row, column;

    printf("A 4×4 grid of stars (*):\n");

    for (row = 1; row <= 4; row++)
    {
        for (column = 1; column <= 4; column++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}