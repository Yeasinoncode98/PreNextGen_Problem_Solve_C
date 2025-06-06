#include <stdio.h>

int main()
{

    int matrix[3][3];
    int evencount = 0;

    printf("Enter elements of 3x3 matrix:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matrix [%d] [%d] : ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] % 2 == 0)
            {
                evencount++;
            }
        }
    }

    printf("Total Even Numbers:%d\n", evencount);

    return 0;
}
```