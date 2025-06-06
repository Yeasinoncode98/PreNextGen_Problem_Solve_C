#include <stdio.h>
int main()
{
    int n1;

    printf("Enter a number: ");
    scanf("%d", &n1);

    if (n1 % 10 == 0)
    {
        printf("%d is multiple of 10\n", n1);
    }
    else
    {
        printf("%d is not multiple of 10\n", n1);
    }

    return 0;
}