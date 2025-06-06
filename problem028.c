#include <stdio.h>
int main()

{
    int n1;

    printf("Enter First Number: ");
    scanf("%d", &n1);

    if (n1 % 2 == 0)
    {
        printf("%d is an even number\n", n1);
    }
    else
    {
        printf("%d is an odd number\n", n1);
    }

    return 0;
}