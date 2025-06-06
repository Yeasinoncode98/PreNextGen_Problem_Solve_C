#include <stdio.h>
int main()
{

    printf("Print numbers from 1 to 100 divisible by 3 and 5.:\n");

    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}