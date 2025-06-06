#include <stdio.h>
int main()
{

    int i, j, k, N = 5;

    printf("A pyramid pattern of stars (*):\n");

    for (i = 1; i <= N; i++)
    {

        for (j = 1; j <= N - i; j++)
        {
            printf(" ");
        }

        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}