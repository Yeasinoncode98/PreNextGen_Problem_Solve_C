#include <stdio.h>

int main()
{

    int i = 1;
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 10)
    {
        printf("1 to 10 numbers are\n", n);
        for (i = 1; i <= 10; i++)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}