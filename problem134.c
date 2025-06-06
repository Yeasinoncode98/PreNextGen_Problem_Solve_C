#include <stdio.h>

void checkEvenOdd(int num);

int main()
{

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    checkEvenOdd(number);

    return 0;
}

void checkEvenOdd(int num)
{
    if (num % 2 == 0)
    {
        printf("%d is an Even Number:\n", num);
    }
    else
    {
        printf("%d is an odd Number:\n", num);
    }
}