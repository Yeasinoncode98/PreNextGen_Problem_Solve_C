
#include <stdio.h>

int main()
{

    int matrix[3][3];

    int i, j, size;

    printf("Enter Elements of 3x3 Matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter Matrix Elements [%d] [%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Main Diagonal elemets:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i + j == 2)
            {
                printf("%d   ", matrix[i][j]);
            }
        }
    }

    // i used directly as the size is 3 so i minused here size-1= 3-1=2

    return 0;
}