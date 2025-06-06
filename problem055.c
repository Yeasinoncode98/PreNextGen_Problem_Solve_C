#include <stdio.h>

int main()
{

    int a, b, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = b; i >= a; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}