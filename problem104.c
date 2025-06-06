#include <stdio.h>

int main()
{

    int matrix[2][2];
    int sum = 0;

    printf("Enter Elements of 2x2 matrics:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Elemet %d %d : ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("\n\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    printf("Sum of all elements:%d\n", sum);

    return 0;
}