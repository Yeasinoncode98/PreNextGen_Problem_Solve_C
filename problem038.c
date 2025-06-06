#include <stdio.h>

int main()
{
    int mark;

    printf("Enter mark: ");
    scanf("%d", &mark);

    if (mark >= 40)
    {
        printf("This student is pass (Mark %d)\n", mark);
    }

    else
    {
        printf("This student is fail (Mark %d)\n", mark);
    }

    return 0;
}