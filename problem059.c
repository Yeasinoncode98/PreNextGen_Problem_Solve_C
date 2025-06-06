#include <stdio.h>
int main()
{

    printf("Numbers from 1 to 100 divisible by 5:\n");

    for (int i = 1; i <= 100; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}