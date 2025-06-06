#include <stdio.h>
int main()
{
    int i;
    printf("Numbers from 1 to 100 and skip multiples of 10:\n");

    for (i = 1; i <= 100; i++)
    {
        if (i % 10 == 0)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}