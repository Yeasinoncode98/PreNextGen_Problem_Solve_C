#include <stdio.h>
int main()
{

    int i, n = 12, factorial = 1;

    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("%d\n", factorial);

    return 0;
}