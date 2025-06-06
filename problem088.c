#include <stdio.h>
int main()
{

    int i;

    printf("Numbers from 1 to 30, skip multiples of 5:\n");

    for (i = 1; i <= 30; i++)
    {
        if (i % 5 == 0)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}