#include <stdio.h>
int main()
{

    int i, j;

    printf("A square pattern of numbers where each row has same number:\n");

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}