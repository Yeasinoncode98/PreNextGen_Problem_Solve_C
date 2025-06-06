#include <stdio.h>
int main()
{

    printf("Odd number from 0 to 20:\n");

    for (int i = 0; i <= 20; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}