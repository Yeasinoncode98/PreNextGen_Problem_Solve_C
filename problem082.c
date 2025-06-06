#include <stdio.h>
int main()
{

    int i, j, Rowsum = 0, N = 4;

    printf("A square pattern of numbers where each row has the same number & print the sum of each row:\n");

    for (i = 1; i <= N; i++)
    {
        Rowsum = 0;

        for (j = 1; j <= N; j++)
        {
            printf("%d ", i);
            Rowsum += i;
        }

        printf("| %d\n", Rowsum);
    }

    return 0;
}