#include <stdio.h>
int main()
{

    int i;

    printf("Numbers from 1 to N, but only print when i*i < 100:\n");

    for (i = 1; i <= 100; i++)
    {
        if (i * i < 100)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}