#include <stdio.h>
int main()
{

    int i;

    printf("Numbers between 1 to 100 that are divisible by 2 or 3:\n");

    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0 || i % 3 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}