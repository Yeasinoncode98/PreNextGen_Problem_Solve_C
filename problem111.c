#include <stdio.h>

int main()
{

    int matrix[3][3];
    int i, j, rowsum = 0;

    printf("Enter Elements of 3x3 matrics:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Elemnets [%d] [%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        rowsum = 0;
        for (j = 0; j < 3; j++)
        {
            rowsum += matrix[i][j];
        }
        printf("Sum of Digits of Row %d : %d\n", i + 1, rowsum);
    }

    return 0;
}