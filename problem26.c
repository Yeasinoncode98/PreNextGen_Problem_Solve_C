#include <stdio.h>

int main()
{

    int n1;
    int n2;

    printf("Enter First Number: ");
    scanf("%d", &n1);

    printf("Enter Second Number: ");
    scanf("%d", &n2);

    if (n1 < n2)
    {
        printf("%d is a smaller number\n", n1);
    }

    else if (n2 < n1)
    {
        printf("%d is the smaller number\n", n2);
    }

    else
    {
        printf("Both numbers are equal\n");
    }
    return 0;
}