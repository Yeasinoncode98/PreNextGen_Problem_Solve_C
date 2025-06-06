#include <stdio.h>
int main()
{

    int i;

    printf("Numbers 1 to 50, but stop if a multiple of 7 is found:\n");

    for (i = 1; i <= 50; i++)
    {
        printf("%d\n", i);
        if (i % 7 == 0)
        {
            break;
        }
    }

    return 0;
}