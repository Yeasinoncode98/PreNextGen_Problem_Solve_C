#include <stdio.h>
int main()
{

    int i, j, num = 1;

    printf("Numbers in a triangle shape (1, 23, 456:\n");

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}