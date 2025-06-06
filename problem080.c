#include <stdio.h>
int main()
{

    int i, j;

    printf("A multiplication table from 1 to 5 :\n");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}