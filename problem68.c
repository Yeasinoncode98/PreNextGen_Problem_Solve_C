#include <stdio.h>
int main()
{

    int i, N = 20, sum = 0;

    for (i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    printf("sum of even numbers from 1 to %d: %d\n", N, sum);

    return 0;
}