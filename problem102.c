#include <stdio.h>

int main()
{

    int matrix[3][3];

    printf("Enter elements of 3x3 matrics:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Elemet %d %d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n\n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d   ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}