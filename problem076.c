#include <stdio.h>
int main()
{

    int i, N = 50;

    printf("Numbers between 1 and N that are perfect squares:\n");

    for (i = 1; i * i <= N; i++)
    {
        if (i * i <= N)
        {
            printf("%d\n", i * i);
        }
    }

    return 0;
}