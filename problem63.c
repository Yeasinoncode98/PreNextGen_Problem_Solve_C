#include <stdio.h>
int main()
{
    int i;

    for (i = 1; i <= 30; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d is even number\n", i);
        }

        else
        {
            printf("%d is odd number\n", i);
        }
    }

    return 0;
}