#include <stdio.h>

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("%d is a positive number\n", n);
    }

    else if (n < 0)
    {
        printf("%d is a negative number\n", n);
    }

    else
    {
        printf("The number is 0\n");
    }

    return 0;
}