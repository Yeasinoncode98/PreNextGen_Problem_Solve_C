#include <stdio.h>
int main()
{

    int i, N = 20;

    printf("numbers between 1 to 100 that are divisible by 6 but not by 9:\n");

    for (i = 1; i <= 100; i++)
    {
        if (i % 6 == 0 && i % 9 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}