#include <stdio.h>

int main()
{
    int n1 = 50;
    int n2 = 30;

    n1 = n1 - n2; // 20
    n2 = n1 + n2; // 50
    n1 = n2 - n1; // 30

    printf("First integer:%d\n", n1);
    printf("Second integer:%d\n", n2);

    return 0;
}