#include <stdio.h>

int main()
{

    int a, b, c, i;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    for (i = b; i >= a; i -= c)
    {
        printf("%d\n", i);
    }

    return 0;
}