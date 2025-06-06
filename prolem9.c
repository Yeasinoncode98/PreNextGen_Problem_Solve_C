#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int sum;

    printf("Enter First integer: ");
    scanf("%d", &n1);

    printf("Enter Second Integer: ");
    scanf("%d", &n2);

    sum = (n1 + n2);

    printf("Sum:%d\n", sum);

    return 0;
}