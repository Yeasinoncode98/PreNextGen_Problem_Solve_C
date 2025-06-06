#include <stdio.h>
int main()
{

    int i;
    printf("Numbers from 1 to 100 but stop printing when number reaches 50:\n");

    for (i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
        if (i == 50)
        {
            break;
        }
    }

    return 0;
}