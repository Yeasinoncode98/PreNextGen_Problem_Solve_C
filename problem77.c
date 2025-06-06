#include <stdio.h>
int main()
{

    int i, j, num = 1;

    printf("3×3 matrix only numbers from 1 to 9:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}