#include <stdio.h>

int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("The number is zero ", n);
    }

    else
    {
        printf("The number is not zero", n);
    }

    return 0;
}