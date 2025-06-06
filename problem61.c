#include <stdio.h>
int main()
{

    printf("Multiples of 7 :\n");

    for (int i = 1; i <= 100; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}