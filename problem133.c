
#include <stdio.h>

int add(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{

    int number1 = 10;
    int number2 = 20;
    int result;

    result = add(number1, number2);

    printf("Sum of two numbers is :\n");
    printf("%d", result);

    return 0;
}