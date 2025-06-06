#include <stdio.h>
int main()
{

    int num;

    printf("Enter any number:\n");

    while (1)
    {
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }
        printf("You entered:%d\n", num);
    }

    printf("Loop stopped due to user entered 0.\n");

    return 0;
}