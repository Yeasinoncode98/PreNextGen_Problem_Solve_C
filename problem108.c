#include <stdio.h>

int main()
{

    int matrix1[2][2], matrix2[2][2], sum[2][2];

    printf("Enter Elements of first 2x2 matrics:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("matrix1 %d %d : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter Elements of second 2x2 matrics:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("matrix2 %d %d : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("sum of Matrix:\n\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d  ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}