#include <stdio.h>

int main()
{

    int a, b, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}