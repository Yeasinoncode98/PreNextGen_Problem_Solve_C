#include <stdio.h>
int main()
{

    int i;

    printf("Numbers from 1 to 20, skip even numbers:\n");

    for (i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}