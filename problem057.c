#include <stdio.h>

int main()
{

    int i, n;
    printf("Enter any number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("1 to 50 all even numbers:\n");
        for (i = 2; i <= 50; i += 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}