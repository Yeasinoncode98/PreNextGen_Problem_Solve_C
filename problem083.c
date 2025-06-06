#include <stdio.h>
int main()
{

    int i;

    printf("Upper caseletters (A-Z):\n");

    for (i = 65; i <= 90; i++)
    {
        printf("%c\n", i);
    }

    printf("\n\n");

    printf("lower caseletters(a-z):\n");

    for (i = 97; i <= 122; i++)
    {
        printf("%c\n", i);
    }

    return 0;
}