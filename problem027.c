#include <stdio.h>
int main()

{
    int n1;
    int n2;
    int n3;

    printf("Enter first Number: ");
    scanf("%d", &n1);

    printf("Enter second Number: ");
    scanf("%d", &n2);

    printf("Enter third Number: ");
    scanf("%d", &n3);

    if (n1 >= n2)
    {
        if (n1 >= n3)
        {
            printf("%d is the largest number\n", n1);
        }

        else
        {
            printf("%d is the largest number\n", n3);
        }
    }

    if (n2 >= n3)
    {
        printf("%d is the largest number\n", n2);
    }
    else
    {
        printf("%d is the largest number\n", n3);
    }

    return 0;
}