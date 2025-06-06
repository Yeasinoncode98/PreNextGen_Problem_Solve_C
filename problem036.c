
#include <stdio.h>

int main()
{
    int n1;

    printf("Enter a first number: ");
    scanf("%d", &n1);

    if (n1 % 5 == 0)
    {
        printf("%d is divisible by 5\n", n1);
    }

    else
    {
        printf("%d is not divisible by 5\n", n1);
    }
    return 0;
}