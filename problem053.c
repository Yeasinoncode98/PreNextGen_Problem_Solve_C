#include <stdio.h>

int main()
{

    int i, digit;

    printf("Enter a digit: ");
    scanf("%d", &digit);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", digit, i, digit * i);
    }

    return 0;
}