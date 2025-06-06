#include <stdio.h>
int main()
{

    int i, N = 20;

    printf("Numbers from N down to 1 and print only odd numbers:\n");

    for (i = N; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}