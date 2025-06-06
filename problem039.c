#include <stdio.h>

int main()
{
    int n1;

    printf("Enter number: ");
    scanf("%d", &n1);

    if (n1 >= 0 && n1 < 10)
    {
        printf("%d is a single digit number\n", n1);
    }

    else if (n1 >= 10 && n1 < 100)
    {
        printf("%d is a double digit number\n", n1);
    }

    else
    {
        printf("%d is a triple digit number\n", n1);
    }

    return 0;
}