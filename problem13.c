#include <stdio.h>

int main()
{
    int n1 = 100, n2 = 200, n3 = 10, n4 = 3;

    int result1, result2;

    result1 = 100 + 200 / 10 - 3 * 10;

    result2 = (100 + 200) / 10 - 3 * 10;

    printf("%d\n", result1);
    printf("%d\n", result2);

    return 0;
}