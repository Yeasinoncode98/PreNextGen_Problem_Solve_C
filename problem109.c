
#include <stdio.h>

int main()
{

    int realpart[2][3], transpose[3][2];
    int i, j;

    printf("Enter Elements of 2x3 Matrix:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Element [%d] [%d] : ", i, j);
            scanf("%d", &realpart[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transpose[j][i] = realpart[i][j];
        }
    }

    printf("Transpose of the 2x3 Matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d    ", transpose[i][j]);
        }
    }

    return 0;
}