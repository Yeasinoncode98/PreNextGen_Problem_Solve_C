#include <stdio.h>

int main()
{

    int matrix[2][2], max;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter %d %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    max = matrix[0][0];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }

    printf("Largest Number:%d\n", max);

    return 0;
}